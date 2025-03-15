#include <iostream>
using namespace std;

void display(int num) { cout << "Integer function called!\n"; }
void display(char *str) { cout << "Pointer function called!\n"; }

int main() {
    display(nullptr); // Resolves ambiguity
    return 0;
}