#include <iostream>  
using namespace std;  

int main() {  
    int decimal = 42;  
    int octal = 052;  // Octal  
    int hex = 0x2A;   // Hexadecimal  
    int binary = 0b101010;  // Binary  
    long long bigNum = 42LL;  // Long Long  
    cout << "Decimal: " << decimal << "\nOctal: " << octal  
         << "\nHex: " << hex << "\nBinary: " << binary  
         << "\nLong Long: " << bigNum << endl;  
    return 0;  
}  