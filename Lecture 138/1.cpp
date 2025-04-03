#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter() : value(0) {}
    void operator++() { value += 1; } // Pre-increment overload
    void display() const { cout << "Value: " << value << endl; }
};

int main() {
    Counter c;
    ++c; // Calls overloaded ++ operator
    c.display();
    return 0;
}
