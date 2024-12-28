#include <iostream>
using namespace std;

int main() {
    // 1 - red
    // 2 - blue
    // 3 - green
    int color = 1;
    switch (color)
    {
        case 1:
            cout << "It is a Red Color " << endl;
            break;

        case 2:
            cout << "It is a Blue Color " << endl;
            break;

        case 3:
            cout << "It is a Green Color " << endl;
            break;
    
        default:
            cout << "Other than RGB " << endl;
            break;
    }
    return 0;
}