#include <iostream>
using namespace std;

int main() {
    int row = 0;

    // Outer loop for rows
    while (row < 4) {
        int col = 0;

        // Inner loop for columns
        while (col < 4) {
            cout << "* ";
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}
