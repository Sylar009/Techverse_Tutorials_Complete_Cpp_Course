#include <iostream>
using namespace std;

// Number Class
class Number {
private:
    int num1, num2;

public:
    // Constructor
    Number(int n1, int n2) : num1(n1), num2(n2) {}

    // Function to calculate GCD
    int calculateGCD() {
        int a = num1, b = num2;
        while (a != b) {
            if (a > b)
                a -= b;
            else
                b -= a;
        }
        return a;
    }

    // Function to check if a number is prime
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
};

// Custom Exception Class
class PrimeException {};

int main() {
    Number num(15, 13);

    // Print GCD
    cout << "GCD: " << num.calculateGCD() << endl;

    try {
        if (num.isPrime(15) || num.isPrime(13)) {
            throw PrimeException();
        }
    } catch (PrimeException &e) {
        cout << "Caught a PrimeException." << endl;
    }

    return 0;
}