#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "Total size of array: " << sizeof(arr) << " bytes\n";
    cout << "Number of elements: " << length << "\n";
    return 0;
}