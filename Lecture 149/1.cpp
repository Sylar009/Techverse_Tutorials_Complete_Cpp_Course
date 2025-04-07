#include <iostream>
using namespace std;

// Base class
class Alpha {
public:
    virtual void process() { cout << "Alpha's process function.\n"; }
};

// Derived class 1
class Beta : public Alpha {
public:
    void process() { cout << "Beta's process function.\n"; }
};

// Derived class 2
class Gamma : public Beta {
public:
    void process() { cout << "Gamma's process function.\n"; }
};

int main() {
    Gamma obj;             // Object of Gamma
    Beta* ptr = &obj;      // Base class pointer pointing to Gamma's object

    // Virtual function call
    ptr->process();        // Output will be from Gamma's process function

    return 0;
}
