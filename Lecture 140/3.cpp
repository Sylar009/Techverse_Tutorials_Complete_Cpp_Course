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

class Child : private Parent {
public:
    int getProtectedVar() { return protectedVar; }
    int getPublicVar() { return publicVar; }
    int accessPrivateVar() { return getPrivateVar(); }
};

int main() {
    Child obj;
    cout << "Private = " << obj.accessPrivateVar() << endl;
    cout << "Protected = " << obj.getProtectedVar() << endl;
    cout << "Public = " << obj.getPublicVar() << endl;
    return 0;
}