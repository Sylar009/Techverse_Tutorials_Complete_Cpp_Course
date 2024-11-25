#include <iostream>
using namespace std;

int main() {
    int numbers[4] = {10, 20, 30, 40};
    for (int i = 0; i < 4; i++) {
        cout << "Element " << i << ": " << numbers[i] << endl;
    }
    return 0;
}