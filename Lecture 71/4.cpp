#include <iostream>
using namespace std;

void doubleElements(int (&nums)[5]) {
    for (int i = 0; i < 5; i++)
        nums[i] *= 2;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    doubleElements(arr);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    return 0;
}
