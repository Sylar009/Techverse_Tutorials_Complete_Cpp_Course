#include <iostream>
using namespace std;

void enclosingFunction() {
    static int staticVar = 10;
    enum { constVar = 5 };

    class LocalClass {
    public:
        void display() {
            cout << "Static Variable: " << staticVar << endl;
            cout << "Enum Constant: " << constVar << endl;
        }
    };

    LocalClass obj;
    obj.display();
}

int main() {
    enclosingFunction();
    return 0;
}
