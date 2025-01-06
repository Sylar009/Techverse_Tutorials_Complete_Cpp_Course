#include <iostream>
using namespace std;

int main() {
    for (int num = 1; num <= 10; num++) {
        if (num == 5)
            continue; // Skips printing 5
        cout << num << " ";
    }
    return 0;
}