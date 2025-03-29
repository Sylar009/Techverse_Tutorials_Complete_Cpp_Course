#include <iostream>
using namespace std;

void process(const int &value) {
    cout << "Const Reference Called";
}

void process(int &value) {
    cout << "Non-Const Reference Called";
}

int main() {
    const int num1 = 5;
    int num2 = 10;

    process(num1); // Calls Const Reference
    process(num2); // Calls Non-Const Reference
    return 0;
}
