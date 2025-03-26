#include <iostream>
using namespace std;

class ParentClass {
    int parentData = 10;

    class ChildClass {
        int childData = 20;

    public:
        void displayChildData(ParentClass* parent) {
            // Accessing parent class private member
            cout << "Parent Data: " << parent->parentData << endl;
        }
    };

public:
    void accessChildData() {
        // Uncommenting the below line will cause error
        // ChildClass obj; obj.childData = 30;
        cout << "Cannot directly access ChildClass private data" << endl;
    }
};

int main() {
    ParentClass parent;
    parent.accessChildData();
    return 0;
}
