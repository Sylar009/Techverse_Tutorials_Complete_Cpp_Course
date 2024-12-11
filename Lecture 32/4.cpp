#include <iostream>
#include <limits>
using namespace std;

int main() {
    int number;
    char text[50];
    cout << "Enter a number: ";
    cin >> number;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter a string: ";
    cin.getline(text, 50);
    cout << "Number: " << number << ", Text: " << text << endl;
    return 0;
}