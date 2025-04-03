#include <iostream>
using namespace std;

class Parent {
private:
    int privateVar = 10;
protected:
    int protectedVar = 20;
public:
    int publicVar = 30;

    int getPrivateVar() { return privateVar; }
};

class Child : public Parent {
public:
    int getProtectedVar() { return protectedVar; }
};

int main() {
    Child obj;
    cout << "Private = " << obj.getPrivateVar() << endl;
    cout << "Protected = " << obj.getProtectedVar() << endl;
    cout << "Public = " << obj.publicVar << endl;
    return 0;
}