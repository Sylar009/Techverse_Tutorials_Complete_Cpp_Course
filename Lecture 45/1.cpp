#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {2, 4, 6, 8, 10};

    // Iterating through the vector
    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}