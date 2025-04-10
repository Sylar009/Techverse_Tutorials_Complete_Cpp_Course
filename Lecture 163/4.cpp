#include <iostream>
using namespace std;

class Validator {
    int value;

public:
    Validator(int x) {
        try {
            if (x == 0) throw "Value cannot be zero!";
            value = x;
            display();
        } 
        catch (const char* msg) {
            cout << "Exception caught: " << msg << endl;
        }
    }

    void display() {
        cout << "Value is: " << value << endl;
    }
};

int main() {
    Validator obj1(0);
    cout << "Creating another object..." << endl;
    Validator obj2(10);
    return 0;
}
