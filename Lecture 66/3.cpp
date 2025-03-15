#include <stdio.h>

// Base class structure
struct Base {
    void (*display)();
};

// Function for Base
void showBase() { printf("Base Class\n"); }

// Initialize Base
void initBase(struct Base* base) { base->display = showBase; }

// Derived class
struct Derived {
    struct Base base;
};

// Function for Derived
void showDerived() { printf("Derived Class\n"); }

// Initialize Derived
void initDerived(struct Derived* derived) {
    initBase(&(derived->base));
    derived->base.display = showDerived;
}

int main() {
    struct Base b;
    struct Derived d;

    initBase(&b);
    initDerived(&d);

    b.display();
    d.base.display();
    return 0;
}
