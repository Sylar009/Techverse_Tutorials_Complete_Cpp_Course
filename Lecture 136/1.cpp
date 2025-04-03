#include <iostream>
using namespace std;

class Measurement {
public:
    int meters, centimeters;

    Measurement(int m, int cm) : meters(m), centimeters(cm) {}

    void operator-() {
        meters--;
        centimeters--;
        cout << "\nMeters & Centimeters (Decrement): " << meters << "m " 
          << centimeters << "cm";
    }
};

int main() {
    Measurement obj1(5, 10);
    -obj1;
    return 0;
}