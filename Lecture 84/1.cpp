#include <iostream>
using namespace std;

struct DataContainer {
    int value;

    void setValue(int input) { value = input; }
    void displayValue() { cout << "Value: " << value; }
};

int main() {
    DataContainer obj;
    obj.setValue(42);
    obj.displayValue();
    return 0;
}
