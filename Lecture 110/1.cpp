#include <iostream>
using namespace std;

class Example {
private:
    int num;

public:
    Example(int num) {
        this->num = num; // Using `this` to assign local variable to the object
    }
    void display() {
        cout << "Value: " << this->num << endl;
    }
};

int main() {
    Example obj(25);
    obj.display();
    return 0;
}
