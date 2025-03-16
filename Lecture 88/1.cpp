#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> IntVector;

int main() {
    IntVector numbers = {10, 20, 30, 40};
    for (int num : numbers) {
        cout << num << " ";
    }
    return 0;
}