#include <iostream>
using namespace std;

int main() {
    char colors[4][12] = {"Green", "Purple", "Orange", "Pink"};

    for (int i = 0; i < 4; i++) {
        cout << colors[i] << "\n";
    }

    return 0;
}