#include <iostream>
using namespace std;

// Function preserving array size using pointer to an array
void preserveSize(int (*arrPointer)[5]) {
    cout << "Size of array by pointer to array: " << sizeof(*arrPointer) << endl;
}

int main() {
    int nums[5] = {5, 10, 15, 20, 25};
    cout << "Original size of array: " << sizeof(nums) << endl;

    preserveSize(&nums);
    return 0;
}
