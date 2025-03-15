#include <iostream>
using namespace std;

template <typename T, size_t N>
void calculateSize(T (&arr)[N]) {
    cout << "Size of array with " << typeid(T).name() << ": " 
    << sizeof(arr) << " bytes" << endl;
}

int main() {
    int nums[10];
    float decimals[20];

    calculateSize(nums);
    calculateSize(decimals);

    return 0;
}
