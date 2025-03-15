#include <iostream>
using namespace std;
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int data[3] = {7, 14, 21};
    printArray(data, 3);
    return 0;
}