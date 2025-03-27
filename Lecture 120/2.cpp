#include <iostream>
using namespace std;

class Complex {
private:
    int real, imaginary;

public:
    Complex(int r = 0, int i = 0) : real(r), imaginary(i) {}

    Complex operator+(Complex const& obj) {
        return Complex(real + obj.real, imaginary + obj.imaginary);
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(4, 5), c2(7, 3);
    Complex result = c1 + c2;
    result.display();
    return 0;
}
