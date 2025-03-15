#include <iostream>
using namespace std;

int main() {
    int* dynamicArr = new int[20];
    // Size cannot be directly computed
    cout << "Size of dynamically allocated array: Cannot determine directly." << endl;

    delete[] dynamicArr;
    return 0;
}
