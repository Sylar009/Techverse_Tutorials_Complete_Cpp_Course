#include <iostream>
using namespace std;

class AbstractBase {
public:
    virtual ~AbstractBase() = 0; // Pure virtual destructor
};

AbstractBase::~AbstractBase() {
    cout << "Abstract base destructor body executed.\n";
}

int main() {
    // AbstractBase obj; // Error: Cannot instantiate abstract class
    return 0;
}
