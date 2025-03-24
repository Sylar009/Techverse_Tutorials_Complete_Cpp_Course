#include <iostream>
using namespace std;

class ValueHolder {
public:
    // Constructor
    ValueHolder() {}
    
    // Copy Constructor
    ValueHolder(const ValueHolder& obj) {
        cout << "Copy Constructor Triggered!" << endl;
    }
};

// Function returning an object
ValueHolder generateValue() {
    ValueHolder localObj;
    return localObj;
}

// Function accepting an object by reference
void processValue(ValueHolder& obj) {
    // Does nothing, just for demonstration
    return;
}

int main() {
    ValueHolder obj1;

    cout << "Case 1: ";
    generateValue();
    cout << endl;

    cout << "Case 2: ";
    processValue(obj1);
    cout << endl;

    cout << "Case 3: ";
    ValueHolder obj2 = obj1;

    return 0;
}
