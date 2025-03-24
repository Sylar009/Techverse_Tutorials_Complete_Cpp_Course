#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int* width;
    int height;

public:
    // Constructor
    Box() {
        width = new int;
    }

    // Copy Constructor
    Box(const Box& obj) {
        length = obj.length;
        width = new int;
        *width = *(obj.width);
        height = obj.height;
    }

    void setDimensions(int l, int w, int h) {
        length = l;
        *width = w;
        height = h;
    }

    void displayData() {
        cout << "Length: " << length << "\nWidth: " << *width << "\nHeight: " 
          << height << endl;
    }

    ~Box() {
        delete width;
    }
};

int main() {
    Box obj1;
    obj1.setDimensions(10, 20, 30);
    obj1.displayData();

    // Deep Copy using Copy Constructor
    Box obj2 = obj1;
    obj2.displayData();

    return 0;
}