#include <iostream>
using namespace std;

void updateArray(int nums[], int length) {
    for (int i = 0; i < length; i++)
        nums[i] += 2;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    updateArray(arr, 5);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    return 0;
}
