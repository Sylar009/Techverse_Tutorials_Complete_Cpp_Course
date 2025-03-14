#include <iostream>
using namespace std;

// Function to calculate area
double calculateArea(double length, double height = 12.0) {
    return length * height;
}

int main() {
    cout << "Area with default height: " << calculateArea(5) << endl;
    cout << "Area with custom height: " << calculateArea(5, 8) << endl;
    return 0;
}
