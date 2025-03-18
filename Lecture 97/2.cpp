#include <iostream>
using namespace std;

class Sphere {
private:
    double radius;

public:
    void set_radius(double r) {
        radius = r;
    }

    double calculate_volume() {
        return (4.0 / 3) * 3.14 * radius * radius * radius;
    }
};

int main() {
    Sphere obj;
    obj.set_radius(3.0);

    cout << "Volume is: " << obj.calculate_volume() << "\n";
    return 0;
}
