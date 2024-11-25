#include <iostream>
using namespace std;

int main() {
    float number = 5.8f;

    // Using static_cast
    int convertedNumber = static_cast<int>(number);

    cout << "Converted Number = " << convertedNumber << endl;
    return 0;
}