#include <iostream>
using namespace std;

template <size_t N>
void calculateSize(int (&arr)[N]) {
    cout << "Size using template: " << sizeof(arr) << " bytes" << endl;
}

int main() {
    int nums[10];
    cout << "Size in main: " << sizeof(nums) << " bytes" << endl;
    calculateSize(nums);
    return 0;
}
