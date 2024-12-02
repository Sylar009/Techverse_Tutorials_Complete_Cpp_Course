#include<iostream>
using namespace std;

class Outer {
public:
    class Inner {
    public:
        static int staticVar;
        void display() { cout << "Accessing Nested Class!" << endl; }
    };
};

int Outer::Inner::staticVar = 42;

int main() {
    Outer::Inner obj;
    obj.display();
    cout << "Static variable: " << Outer::Inner::staticVar << endl;
    return 0;
}