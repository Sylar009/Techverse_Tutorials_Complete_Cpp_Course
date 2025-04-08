#include <iostream>
using namespace std;

// Base class
class Core {
public:
    virtual void action() = 0; // Abstract method
    virtual ~Core() {}
};

// Derived classes
class TypeA : public Core {
public:
    void action() override { cout << "Action from TypeA\n"; }
    ~TypeA() { cout << "Destroying TypeA\n"; }
};

class TypeB : public Core {
public:
    void action() override { cout << "Action from TypeB\n"; }
    ~TypeB() { cout << "Destroying TypeB\n"; }
};

// User class (Tightly Coupled)
class User {
    Core* coreObj;

public:
    User() { coreObj = new TypeA(); } // Fixed to TypeA
    ~User() { delete coreObj; }
    void performAction() { coreObj->action(); }
};

int main() {
    User user;
    user.performAction();
    return 0;
}
