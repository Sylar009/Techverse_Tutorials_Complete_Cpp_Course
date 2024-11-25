#include <iostream>
using namespace std;

class Demo {
public:
    mutable int mutableVar;
    Demo() : mutableVar(100) {}
};

int main() {
    const Demo obj;
    obj.mutableVar = 200; // Allowed due to mutable
    cout << obj.mutableVar;
    return 0;
}