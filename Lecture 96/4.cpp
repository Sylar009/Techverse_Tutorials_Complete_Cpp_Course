#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    void setBalance(double b) {
        balance = b;
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.setBalance(1000.50);
    account.showBalance();
    return 0;
}