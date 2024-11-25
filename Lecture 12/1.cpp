#include <iostream>
using namespace std;

void example() {
    static int counter = 0; // Retains value between calls
    cout << counter << " ";
    counter++;
}

int main() {
    for (int i = 0; i < 5; i++) 
        example();
    return 0;
}