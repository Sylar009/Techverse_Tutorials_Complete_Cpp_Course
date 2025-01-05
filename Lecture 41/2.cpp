#include <iostream>  
using namespace std;  

int main() {  
    char operation;  
    float num1, num2;  
    cout << "Enter an operator (+, -, *, /): ";  
    cin >> operation;  
    cout << "Enter two numbers: ";  
    cin >> num1 >> num2;  

    switch (operation) {  
        case '+':  
            cout << "Result: " << num1 + num2;  
            break;  
        case '-':  
            cout << "Result: " << num1 - num2;  
            break;  
        case '*':  
            cout << "Result: " << num1 * num2;  
            break;  
        case '/':  
            if (num2 != 0)  
                cout << "Result: " << num1 / num2;  
            else  
                cout << "Error: Division by zero!";  
            break;  
        default:  
            cout << "Invalid operator!";  
    }  
    return 0;  
}  