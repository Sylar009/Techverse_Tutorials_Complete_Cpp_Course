#include <iostream>
using namespace std;

// Function demonstrating array decay
void showDecay(int* arrPointer) {
    cout << "Size of array after decay (pointer): " << sizeof(arrPointer) << endl;
}

int main() {
    int nums[5] = {1, 2, 3, 4, 5};
    cout << "Original size of array: " << sizeof(nums) << endl;

    showDecay(nums);
    return 0;
}
