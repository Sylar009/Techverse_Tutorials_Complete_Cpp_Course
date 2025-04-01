#include <iostream>
using namespace std;

class MyMain {
public:
    int mainFunc(int num) {
        cout << "Integer: " << num << endl;
        return 0;
    }
    
    int mainFunc(const char* text) {
        cout << "String: " << text << endl;
        return 0;
    }
    
    int mainFunc(int a, int b) {
        cout << "Sum: " << a + b << endl;
        return 0;
    }
};

int main() {
    MyMain obj;
    obj.mainFunc(5);               // Calls integer version
    obj.mainFunc("I love C++");    // Calls string version
    obj.mainFunc(7, 3);            // Calls two-parameter version
    return 0;
}
