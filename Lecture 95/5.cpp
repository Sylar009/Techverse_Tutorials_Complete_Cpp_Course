#include <iostream>
using namespace std;

class Auto {
public:
    void showSpeed(int speed) {
        cout << "The vehicle is moving at " << speed << " km/h." << endl;
    }
};

int main() {
    Auto myVehicle;
    myVehicle.showSpeed(120);
    return 0;
}