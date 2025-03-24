#include <iostream>
using namespace std;

class Example {
public:
    Example() {
        cout << "Constructor executed\n";
    }
    ~Example() {
        cout << "Destructor executed\n";
    }
};

int main() {
    Example obj;
    return 0;
}
