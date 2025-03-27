#include <iostream>
using namespace std;

class Circle {
private:
    float radius; // Private data
    float area;   // Private data

public:
    void setRadius() {
        cout << "Enter the radius: ";
        cin >> radius;
    }
    void calculateArea() {
        area = 3.14159 * radius * radius; // Calculate area
        cout << "Area of the circle: " << area << endl;
    }
};

int main() {
    Circle myCircle; // Object creation
    myCircle.setRadius(); // Set radius
    myCircle.calculateArea(); // Calculate and display area
    return 0;
}
