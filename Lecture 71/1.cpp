#include <iostream>
using namespace std;

void updateArray(int nums[10]) {
    for (int i = 0; i < 5; i++)
        nums[i] += 3;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    updateArray(arr);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    return 0;
}
