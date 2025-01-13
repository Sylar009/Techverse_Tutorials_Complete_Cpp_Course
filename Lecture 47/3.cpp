#include <iostream>
using namespace std;

int main() {
    int rows = 0;

    // Outer loop for rows
    do {
        int cols = 0;

        // Inner loop for columns
        do {
            cout << "* ";
            cols++;
        } while (cols < 4);

        cout << endl;
        rows++;
    } while (rows < 4);

    return 0;
}
