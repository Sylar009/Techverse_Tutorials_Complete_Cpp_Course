#include<iostream>
namespace NamespaceA {
    class Example {
    public:
        void show() { std::cout << "Inside NamespaceA" << std::endl; }
    };
}

namespace NamespaceB {
    class Example {
    public:
        void show() { std::cout << "Inside NamespaceB" << std::endl; }
    };
}

int main() {
    NamespaceA::Example objA;
    NamespaceB::Example objB;

    objA.show();
    objB.show();
    return 0;
}