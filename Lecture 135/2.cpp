#include <iostream>  
using namespace std;  

class Complex {  
private:  
    int real, imag;  

public:  
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}  

    void display() const {  
        cout << real << " + i" << imag << endl;  
    }  

    friend Complex operator+(Complex const& c1, Complex const& c2);  
};  

Complex operator+(Complex const& c1, Complex const& c2) {  
    return Complex(c1.real + c2.real, c1.imag + c2.imag);  
}  

int main() {  
    Complex obj1(8, 2), obj2(3, 4);  
    Complex result = obj1 + obj2;  
    result.display();  
    return 0;  
}  
