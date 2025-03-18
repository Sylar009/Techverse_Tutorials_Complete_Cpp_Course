#include <iostream>
using namespace std;

class Test {
private:
    int value;

public:
    Test() : value(100) {}

    friend void display(const Test& t); // Friend function declaration
};

void display(const Test& t) {
    cout << "Value: " << t.value << endl;
}

int main() {
    Test obj;
    display(obj);
    return 0;
}