#include <iostream>
using namespace std;

class Demo {
    static int count; // Static member
public:
    void show(int count) {
        cout << "Static count: " << Demo::count << endl; // Access static member
    }
};

// Initialize static member
int Demo::count = 5;

int main() {
    Demo obj;
    int localCount = 10;
    obj.show(localCount);
    return 0;
}
