#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;
    int height;
    int* dynamicValue;

public:
    void setDimensions(int l, int w, int h, int val) {
        length = l;
        width = w;
        height = h;
        dynamicValue = new int;
        *dynamicValue = val;
    }

    void displayData() {
        cout << "Length: " << length << "\nWidth: " << width << "\nHeight: " << height
             << "\nDynamic Value Address: " << dynamicValue << endl;
    }
};

int main() {
    Box obj1, obj2;
    obj1.setDimensions(10, 20, 30, 100);
    obj1.displayData();

    // Shallow Copy using Assignment Operator
    obj2 = obj1;
    obj2.displayData();

    return 0;
}