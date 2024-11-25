#include <iostream>
#include <thread>
using namespace std;

thread_local int value = 5;

void showValue() {
    value += 10;
    cout << "Thread Value: " << value << endl;
}

int main() {
    thread t1(showValue), t2(showValue);
    t1.join();
    t2.join();
    cout << "Main Thread Value: " << value;
    return 0;
}