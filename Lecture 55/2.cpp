#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {4, 1, 6, 3, 9};
    auto it = std::find_if(numbers.begin(), numbers.end(), [](int num) {
        return num > 4;
    });
    std::cout << "First number greater than 4 is: " << *it << std::endl;
    return 0;
}
