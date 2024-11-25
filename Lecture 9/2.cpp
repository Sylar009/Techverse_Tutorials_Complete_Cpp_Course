#include <iostream>
using namespace std;

int main() {
    constexpr int HOURS_IN_DAY = 24;  // Compile-time constant
    cout << "Hours in a Day: " << HOURS_IN_DAY << endl;
    // HOURS_IN_DAY = 56; // error
    return 0;
}