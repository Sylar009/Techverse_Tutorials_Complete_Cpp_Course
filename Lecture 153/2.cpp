#include <iostream>
using namespace std;

// Base class
class Core {
public:
    virtual void action() = 0; // Abstract method
    virtual ~Core() {}

    // Factory Method
    static Core* create(int type);
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

// Factory Method Definition
Core* Core::create(int type) {
    if (type == 1) return new TypeA();
    else if (type == 2) return new TypeB();
    else return nullptr;
}

// User class (Decoupled)
class User {
    Core* coreObj;

public:
    User(int type) { coreObj = Core::create(type); }
    ~User() { delete coreObj; }
    void performAction() { coreObj->action(); }
};

int main() {
    int type;
    cout << "Enter object type (1 for TypeA, 2 for TypeB): ";
    cin >> type;

    User user(type);
    user.performAction();
    return 0;
}
