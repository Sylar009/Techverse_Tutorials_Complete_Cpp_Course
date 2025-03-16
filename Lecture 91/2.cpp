#include <iostream>
using namespace std;

int main() {
    int* array = new int[5];

    for (int i = 0; i < 5; i++) {
        array[i] = i + 1;
    }

    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array;  // Free the memory allocated for the array
    return 0;
}