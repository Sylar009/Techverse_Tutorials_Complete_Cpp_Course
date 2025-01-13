#include <iostream>
using namespace std;

int main() {
    int num = 1;

    // Do-while loop to print the number even when condition is false
    do {
        cout << num << endl;
        num++;
    } while (num < 0);

    return 0;
}
