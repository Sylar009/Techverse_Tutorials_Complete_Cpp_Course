#include <iostream>
using namespace std;

int main() {
    int x = 45, y = 22, z = 30;
    int largest = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
    cout << "Largest Number: " << largest << endl;
    return 0;
}