#include <iostream>
using namespace std;

class Shape {
public:
    string type;
    int sides;

    Shape(string t, int s) {
        type = t;
        sides = s;
    }
    void showDetails() {
        cout << "Shape: " << type << ", Sides: " << sides << endl;
    }
};

class Triangle : public Shape {
    int base, height;
public:
    Triangle(int b, int h) : Shape("Triangle", 3), base(b), height(h) {}
    void calculateArea() {
        cout << "Area of Triangle: " << (0.5 * base * height) << endl;
    }
};

class Square : public Shape {
    int side;
public:
    Square(int s) : Shape("Square", 4), side(s) {}
    void calculateArea() {
        cout << "Area of Square: " << (side * side) << endl;
    }
};

int main() {
    Triangle tri(4, 5);
    Square sq(4);

    tri.showDetails();
    tri.calculateArea();

    sq.showDetails();
    sq.calculateArea();

    return 0;
}
