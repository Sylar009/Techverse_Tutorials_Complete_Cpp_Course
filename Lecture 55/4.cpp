#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int threshold = 5;
    std::vector<int> nums = {3, 7, 1, 8};

    auto printAboveThreshold = [&threshold](int num) {
        if (num > threshold) {
            std::cout << num << " ";
        }
    };

    std::for_each(nums.begin(), nums.end(), printAboveThreshold);
    return 0;
}
