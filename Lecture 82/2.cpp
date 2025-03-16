#include <iostream>
using namespace std;

// Define Point structure
struct Vertex {
    int length;
    int width;
};

// Define Rectangle structure
struct Rectangle {
    Vertex topLeft;
    Vertex bottomRight;
};

// Function to calculate the area of a rectangle
void calculateArea(Rectangle rect) {
    int area = rect.topLeft.length * rect.bottomRight.width;
    cout << "Area: " << area << endl;
}

int main() {
    // Initialize Rectangle with vertices
    Rectangle rect = { {5, 5}, {5, 5} };
    calculateArea(rect);
    return 0;
}
