#include <iostream>
using namespace std;

// Class with Bit Fields
class LoanDetails {
public:
    unsigned int principal : 20;
    unsigned int rate : 6;
    unsigned int term : 6;
};

int main() {
    LoanDetails loan;
    loan.principal = 500000;
    loan.rate = 10;
    loan.term = 24;

    cout << "Memory Size of LoanDetails: " << sizeof(LoanDetails) << " Bytes\n";
    return 0;
}
