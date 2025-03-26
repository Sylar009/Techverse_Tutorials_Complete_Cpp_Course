#include <iostream>
using namespace std;

void myFunction() {
    // Local class definition
    class LocalClass {
    public:
        void display() {
            cout << "Local Class Function Called" << endl;
        }
    };

    LocalClass obj;
    obj.display();
}

int main() {
    myFunction();
    return 0;
}
