#include <iostream>
using namespace std;

int main() {
    char input[50];
    cout << "Enter name:" << endl;
    cin >> ws; // skips leading whitespaces
    cin.getline(input, 50);

    cout << "Your name: " << input << endl;
    return 0;
}