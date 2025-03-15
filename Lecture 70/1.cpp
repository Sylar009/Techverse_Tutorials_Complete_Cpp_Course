#include <iostream>
using namespace std;

void calculateSize(int arr[]) {
    cout << "Size inside function: " << sizeof(arr) << " bytes" << endl;
}

int main() {
    int nums[10];
    cout << "Size in main: " << sizeof(nums) << " bytes" << endl;
    calculateSize(nums);
    return 0;
}
