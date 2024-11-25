#include <iostream>
using namespace std;

class Demo {
public:
    Demo() { cout << "Constructor Called!" << endl; }
    ~Demo() { cout << "Destructor Called!" << endl; }
};

int main() {
    static Demo obj; // Static object
    cout << "End of Program" << endl;
    return 0;
}