#include <iostream>
using namespace std;

enum Vehicle { Car, Bike };
enum Fruit { Apple, Mango };

int main() {
    Vehicle v = Car;
    Fruit f = Apple;

    if (v == f) { // Allowed but logically incorrect
        cout << "Comparison valid but incorrect!" << endl;
    }
    return 0;
}
