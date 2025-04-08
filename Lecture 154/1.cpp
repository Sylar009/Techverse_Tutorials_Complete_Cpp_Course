#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    Shape() {}
    virtual ~Shape() {}
    virtual void modifyAttributes() = 0;
    static Shape* createShape(int type);
    virtual Shape* clone() = 0;
};

// Derived Classes
class Circle : public Shape {
public:
    Circle() { cout << "Circle created." << endl; }
    Circle(const Circle& other) { cout << "Circle copied." << endl; }
    ~Circle() { cout << "Circle destroyed." << endl; }
    void modifyAttributes() { cout << "Circle attributes modified." << endl; }
    Shape* clone() { return new Circle(*this); }
};

class Rectangle : public Shape {
public:
    Rectangle() { cout << "Rectangle created." << endl; }
    Rectangle(const Rectangle& other) { cout << "Rectangle copied." << endl; }
    ~Rectangle() { cout << "Rectangle destroyed." << endl; }
    void modifyAttributes() { cout << "Rectangle attributes modified." << endl; }
    Shape* clone() { return new Rectangle(*this); }
};

// Factory Method
Shape* Shape::createShape(int type) {
    if (type == 1) return new Circle();
    if (type == 2) return new Rectangle();
    return nullptr;
}

// User Class
class Designer {
private:
    Shape* currentShape;
public:
    Designer() : currentShape(nullptr) {
        int input;
        cout << "Enter shape type (1 for Circle, 2 for Rectangle): ";
        cin >> input;
        currentShape = Shape::createShape(input);
    }
    ~Designer() {
        if (currentShape) delete currentShape;
    }
    void design() {
        Shape* newShape = currentShape->clone();
        newShape->modifyAttributes();
        delete newShape;
    }
};

// Main Function
int main() {
    Designer designer;
    designer.design();
    return 0;
}
