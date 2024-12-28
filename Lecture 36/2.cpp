#include <iostream>
using namespace std;

int main() {
    int userAge = 20;
    if (userAge < 18) {
        cout << "You are not eligible to vote!" << endl;
    } else {
        cout << "You can vote!" << endl;
    }
    return 0;
}