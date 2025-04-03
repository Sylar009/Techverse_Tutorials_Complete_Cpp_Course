#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v) : value(v) {}
    Counter operator++(int) { 
        Counter temp = *this; 
        value++; 
        return temp; 
    } // Post-increment
    void display() const { cout << "Value: " << value << endl; }
};

int main() {
    Counter c(5);
    Counter oldValue = c++;
    oldValue.display(); // Shows old value
    c.display();        // Shows updated value
    return 0;
}
