#include <iostream>
using namespace std;

class Demo {
public:
    void show() const {
        cout << "Const Function Called";
    }

    void show() {
        cout << "Non-Const Function Called";
    }
};

int main() {
    Demo obj1;
    const Demo obj2;

    obj1.show();  // Calls Non-Const Function
    obj2.show();  // Calls Const Function
    return 0;
}
