#include <iostream>
using namespace std;

struct Coordinates {
    int x;
};

int main() {
    Coordinates point;
    Coordinates* ptr = &point; // Pointer initialization
    return 0;
}
