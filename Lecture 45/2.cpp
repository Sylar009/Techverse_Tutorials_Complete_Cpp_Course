#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, char> letters = {{1, 'X'}, {2, 'Y'}, {3, 'Z'}};

    // Iterating through the map
    for (auto pair : letters) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}