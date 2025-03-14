#include <iostream>
#include <vector>
#include <algorithm>

void displayVector(const std::vector<int>& vec) {
    std::for_each(vec.begin(), vec.end(), [](int num) {
        std::cout << num << " ";
    });
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 3};
    displayVector(numbers);
    return 0;
}
