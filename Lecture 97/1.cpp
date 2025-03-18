#include <iostream>
using namespace std;

class Sphere {
public:
    double radius;

    double calculate_volume() {
        return (4.0 / 3) * 3.14 * radius * radius * radius;
    }
};

int main() {
    Sphere obj;
    obj.radius = 5.0;

    cout << "Radius is: " << obj.radius << "\n";
    cout << "Volume is: " << obj.calculate_volume() << "\n";
    return 0;
}
