#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    int value = 42;

    // Convert int to double
    double doubleValue = static_cast<double>(value);

    // Display types and values
    cout << "Type of value: " << typeid(value).name() << endl;
    cout << "Type after casting: " << typeid(doubleValue).name() << endl;
    return 0;
}