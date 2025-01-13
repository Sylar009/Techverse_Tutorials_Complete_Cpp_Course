#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4};

    // Modifying values using reference
    for (auto &num : nums) {
        num += 5;
    }

    // Printing modified values
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}