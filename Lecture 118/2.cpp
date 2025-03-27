#include <iostream>
using namespace std;

class Car {
private:
    void engineDetails() {
        cout << "Engine: 1500cc Turbocharged\n";
    }

    void manufacturer() {
        cout << "Manufacturer: AutoTech\n";
    }

public:
    void carDetails() {
        cout << "Car Model: X-Series\n";
        cout << "Color: Metallic Blue\n";
        cout << "Fuel: Diesel\n";
    }
};

int main() {
    Car myCar;
    myCar.carDetails();
    return 0;
}
