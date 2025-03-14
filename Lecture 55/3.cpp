#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {7, 2, 9, 4, 1};
    std::sort(numbers.begin(), numbers.end(), [](int a, int b) -> bool {
        return a > b;
    });
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
