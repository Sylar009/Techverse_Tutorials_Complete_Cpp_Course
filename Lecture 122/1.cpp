#include <iostream>
using namespace std;

class Shape {
public:
    Shape(int l, int w) : length(l), width(w) {}
    int calculateArea() {
        cout << "Base class: No specific area calculation\n";
        return 0;
    }
protected:
    int length, width;
};

class Square : public Shape {
public:
    Square(int side) : Shape(side, side) {}
    int calculateArea() {
        cout << "Square Area: " << length * width << '\n';
        return length * width;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int l, int w) : Shape(l, w) {}
    int calculateArea() {
        cout << "Rectangle Area: " << length * width << '\n';
        return length * width;
    }
};

int main() {
    Shape* shapePtr;

    Square sq(4);
    Rectangle rec(4, 5);

    shapePtr = &sq;
    shapePtr->calculateArea();

    shapePtr = &rec;
    shapePtr->calculateArea();

    return 0;
}
