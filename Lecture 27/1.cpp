#include <iostream>  
using namespace std;  

int main() {  
    int number = 10;  

    // Arithmetic Compound Operators  
    number += 5;  
    number -= 2;  
    number *= 3;  
    number /= 2;  
    number %= 3;  

    // Bitwise Compound Operators  
    number &= 6;  
    number |= 2;  
    number ^= 1;  
    number <<= 2;  
    number >>= 1;  

    cout << "Final Value: " << number << endl;  
    return 0;  
}  