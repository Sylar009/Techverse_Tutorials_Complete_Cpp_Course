#include <iostream>
using namespace std;

class Rectangle {
public:
    float area;

    // Default constructor
    Rectangle() {
        area = 0;
    }

    // Parameterized constructor
    Rectangle(int length, int width) {
        area = length * width;
    }

    // Method to display area
    void displayArea() {
        cout << "Area: " << area << endl;
    }
};

int main() {
    Rectangle rect1;          // Calls default constructor
    Rectangle rect2(10, 20);  // Calls parameterized constructor

    rect1.displayArea();  // Output: 0
    rect2.displayArea();  // Output: 200

    return 0;
}
