#include<iostream> 
using namespace std;

int globalVar; // Global variable

int main() {
    int localVar = 10; // Local variable
    cout << "Global variable: " << ::globalVar << endl;
    cout << "Local variable: " << localVar << endl;
    return 0;
}
