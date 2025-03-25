#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Parameterized constructor
    Number(int v) {
        value = v;
    }
};

int main() {
    Number obj1; // Error: No default constructor
    return 0;
}
