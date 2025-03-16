#include <iostream>
using namespace std;

struct SharedData {
    static int counter;
    SharedData() { counter++; }
};

int SharedData::counter = 0;

int main() {
    SharedData obj1, obj2, obj3;
    cout << "Static Counter: " << SharedData::counter;
    return 0;
}
