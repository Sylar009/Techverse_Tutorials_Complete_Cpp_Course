#include <iostream>
using namespace std;

class Shape {
public:
    virtual void calculateArea() {
        cout << "Base class: No specific area calculation\n";
    }
    virtual ~Shape() {
        cout << "Shape destructor called\n";
    }
};

class Square : public Shape {
public:
    int side;
    Square(int s) : side(s) {}
    void calculateArea() override {
        cout << "Square Area: " << side * side << '\n';
    }
    ~Square() {
        cout << "Square destructor called\n";
    }
};

class Rectangle : public Shape {
public:
    int length, width;
    Rectangle(int l, int w) : length(l), width(w) {}
    void calculateArea() override {
        cout << "Rectangle Area: " << length * width << '\n';
    }
    ~Rectangle() {
        cout << "Rectangle destructor called\n";
    }
};

int main() {
    Shape* shapePtr;

    Square sq(6);
    Rectangle rec(5, 7);

    shapePtr = &sq;
    shapePtr->calculateArea();

    shapePtr = &rec;
    shapePtr->calculateArea();

    return 0;
}
