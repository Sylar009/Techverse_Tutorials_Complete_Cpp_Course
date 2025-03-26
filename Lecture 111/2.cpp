#include <iostream>
using namespace std;

class Example {
    int num;
public:
    Example() { num = 0; }
    void setNum(int num) { this->num = num; } // Resolves shadowing
    void display() { cout << "Number: " << num << endl; }
};

int main() {
    Example obj;
    int value = 42;
    obj.setNum(value);
    obj.display();
    return 0;
}
