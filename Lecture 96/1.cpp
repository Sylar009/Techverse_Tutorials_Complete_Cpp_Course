#include <iostream>
using namespace std;

class Vehicle {
public:
    int speed;
    void displaySpeed() {
        cout << "Speed is: " << speed << " km/h" << endl;
    }
};

int main() {
    Vehicle car;
    car.speed = 120;
    car.displaySpeed();
    return 0;
}