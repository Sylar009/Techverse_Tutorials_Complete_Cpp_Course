#include <iostream>
using namespace std;

class Sample {
private:
    ~Sample() {}  // Private Destructor
};

int main() {
    // No objects created, compiles successfully
    return 0;
}
