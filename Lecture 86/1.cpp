#include <iostream>
using namespace std;

// Struct without Bit Fields
struct LoanBasic {
    unsigned int principal;
    unsigned int rate;
    unsigned int term;
};

// Struct with Bit Fields
struct LoanOptimized {
    unsigned int principal : 20; // Max value 1,048,575
    unsigned int rate : 6;       // Max rate 63
    unsigned int term : 6;       // Max term 63 months
};

int main() {
    cout << "Size without Bit Fields: " << sizeof(LoanBasic) << " Bytes\n";
    cout << "Size with Bit Fields: " << sizeof(LoanOptimized) << " Bytes\n";
    return 0;
}
