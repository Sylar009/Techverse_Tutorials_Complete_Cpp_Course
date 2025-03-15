#include <iostream>
using namespace std;

void calculateSize(int (&arr)[10]) {
    cout << "Size inside function using reference: " << sizeof(arr) << " bytes" << endl;
}

int main() {
    int numbers[10];
    cout << "Size in main: " << sizeof(numbers) << " bytes" << endl;
    calculateSize(numbers);
    return 0;
}
