#include <iostream>
using namespace std;

int main() {
    int num = 7;
    cout << "Initial Value: " << num << endl;
    cout << "Postfix Increment (num++): " << num++ << endl;
    cout << "Prefix Increment (++num): " << ++num << endl;

    int count = 15;
    cout << "Initial Count: " << count << endl;
    cout << "Postfix Decrement (count--): " << count-- << endl;
    cout << "Prefix Decrement (--count): " << --count << endl;

    return 0;
}