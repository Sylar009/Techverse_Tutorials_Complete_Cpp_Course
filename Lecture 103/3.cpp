#include <iostream>
using namespace std;

class Demo {
private:
    ~Demo() {}
};

int main() {
    Demo* ptr;  // Works fine, no object created
    return 0;
}
