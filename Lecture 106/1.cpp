#include <iostream>
using namespace std;

class Sample {
private:
    int *data;

public:
    // Constructor
    Sample(int value) {
        data = new int;
        *data = value;
    }

    // Default Copy Constructor (Shallow Copy)
    Sample(const Sample &obj) {
        data = obj.data; // Copies the address, not the value
    }

    void show() {
        cout << "Value: " << *data << endl;
    }

    ~Sample() {
        delete data;
    }
};

int main() {
    Sample obj1(10);
    Sample obj2 = obj1; // Shallow Copy

    obj1.show();
    obj2.show();

    return 0;
}