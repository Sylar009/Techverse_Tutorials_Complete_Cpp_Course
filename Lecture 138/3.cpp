#include <iostream>
using namespace std;

class Array {
    int data[3];

public:
    Array(int x, int y, int z) {
        data[0] = x;
        data[1] = y;
        data[2] = z;
    }
    int operator[](int index) const { return data[index]; } // Overload []
};

int main() {
    Array arr(10, 20, 30);
    cout << arr[1] << endl; // Access second element
    return 0;
}
