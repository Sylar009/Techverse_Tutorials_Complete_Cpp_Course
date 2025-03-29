#include <iostream>
namespace NamespaceA {
    void show(int value) {
        std::cout << "From NamespaceA: " << value << std::endl;
    }
}

namespace NamespaceB {
    void show(char value) {
        std::cout << "From NamespaceB: " << value << std::endl;
    }
}

int main() {
    NamespaceA::show(42);   // Calls NamespaceA's function
    NamespaceB::show('A');  // Calls NamespaceB's function
    return 0;
}
