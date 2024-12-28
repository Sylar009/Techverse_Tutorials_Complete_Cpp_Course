#include <iostream>
using namespace std;

int main() {
    int userAge = 20;
    if (userAge < 14) {
        cout << "You are a child!" << endl;
    } else if (userAge >= 14 && userAge < 18) {
        cout << "You are a teenager!" << endl;
    } else {
        cout << "You are an adult!" << endl;
    }
    return 0;
}