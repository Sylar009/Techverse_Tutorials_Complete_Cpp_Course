#include <iostream>
using namespace std;

void demoRegister() {
    register int num = 15;
    cout << "Register variable: " << num << endl;
}

int main() {
    demoRegister();
    return 0;
}