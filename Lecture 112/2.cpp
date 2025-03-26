#include <iostream>
using namespace std;

void anotherFunction() {
    class LocalClass {
    public:
        void showMessage() {
            cout << "Hello from Local Class!" << endl;
        }

        static void staticMessage() {
            cout << "Static method in Local Class!" << endl;
        }
    };

    LocalClass obj;
    obj.showMessage();
    LocalClass::staticMessage();
}

int main() {
    anotherFunction();
    return 0;
}
