#include<iostream>
using namespace std;

class MyClass {
public:
    void display();
};

void MyClass::display() {
    cout << "Function defined outside the class." << endl;
}

int main() {
    MyClass obj;
    obj.display();
    return 0;
}
