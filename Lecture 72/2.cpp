#include <iostream>
using namespace std;

// Function preventing array decay using reference
void preventDecay(int (&arrRef)[5]) {
    cout << "Size of array by reference: " << sizeof(arrRef) << endl;
}

int main() {
    int nums[5] = {10, 20, 30, 40, 50};
    cout << "Original size of array: " << sizeof(nums) << endl;

    preventDecay(nums);
    return 0;
}
