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

    // Custom Copy Constructor (Deep Copy)
    Sample(const Sample &obj) {
        data = new int;
        *data = *(obj.data); // Creates a new memory block
    }

    void show() {
        cout << "Value: " << *data << endl;
    }

    ~Sample() {
        delete data;
    }
};

int main() {
    Sample obj1(20);
    Sample obj2 = obj1; // Deep Copy

    obj1.show();
    obj2.show();

    return 0;
}