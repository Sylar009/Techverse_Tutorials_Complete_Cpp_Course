#include <iostream>
using namespace std;

inline int calculateCube(int num) {
    return num * num * num;
}

int main() {
    cout << "Cube of 4 is: " << calculateCube(4) << endl;
    return 0;
}