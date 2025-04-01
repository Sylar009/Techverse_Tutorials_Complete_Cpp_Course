#include <iostream>  
using namespace std;  

class Fraction {  
private:  
    int numerator, denominator;  

public:  
    Fraction(int num, int den) : numerator(num), denominator(den) {}  

    operator float() const {  
        return static_cast<float>(numerator) / denominator;  
    }  
};  

int main() {  
    Fraction frac(3, 5);  
    float value = frac;  
    cout << "Fraction as float: " << value << endl;  
    return 0;  
}  
