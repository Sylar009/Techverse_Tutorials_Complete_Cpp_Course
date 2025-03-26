#include <iostream>
using namespace std;

// Outer Class Definition
class OuterClass {
private:
    int outerData = 100;

    // Inner Class Definition
    class InnerClass {
    private:
        int innerData = 200;

    public:
        void showOuterData(OuterClass* outer) {
            // Accessing private member of outer class
            cout << "Outer Data: " << outer->outerData << endl;
        }
    };

public:
    void demonstrate() {
        InnerClass innerObj;
        innerObj.showOuterData(this);
    }
};

int main() {
    OuterClass outerObj;
    outerObj.demonstrate();
    return 0;
}
