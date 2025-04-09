#include <iostream>
using namespace std;

class Base {
public:
    void invoke() { execute(); }

private:
    virtual void execute() { cout << "Executing from Base\n"; }
};

class Derived : public Base {
private:
    virtual void execute() override { cout << "Executing from Derived\n"; }
};

int main() {
    Derived obj;
    obj.invoke();
    return 0;
}
