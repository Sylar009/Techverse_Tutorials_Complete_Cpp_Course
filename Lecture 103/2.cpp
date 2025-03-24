#include <iostream>
using namespace std;

class Example {
private:
    ~Example() {}
};

int main() {
    Example obj;  // Error: Destructor is private
    return 0;
}
