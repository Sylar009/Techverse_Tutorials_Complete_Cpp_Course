#include <iostream>  
using namespace std;  

class ComplexNumber {  
private:  
    int realPart, imagPart;  

public:  
    ComplexNumber(int r = 0, int i = 0) : realPart(r), imagPart(i) {}  

    ComplexNumber operator+(ComplexNumber const& obj) {  
        return ComplexNumber(realPart + obj.realPart, imagPart + obj.imagPart);  
    }  

    void display() const {  
        cout << realPart << " + i" << imagPart << endl;  
    }  
};  

int main() {  
    ComplexNumber num1(10, 5), num2(4, 3);  
    ComplexNumber result = num1 + num2;  
    result.display();  
    return 0;  
}  
