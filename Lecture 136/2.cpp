#include <iostream>
using namespace std;

class Length {
public:
    int meters, centimeters;

    Length() : meters(0), centimeters(0) {}

    Length(int m, int cm) : meters(m), centimeters(cm) {}

    Length operator+(Length& obj) {
        Length result;
        result.meters = this->meters + obj.meters;
        result.centimeters = this->centimeters + obj.centimeters;
        return result;
    }
};

int main() {
    Length l1(3, 50);
    Length l2(4, 75);
    Length l3 = l1 + l2;

    cout << "\nTotal Length: " << l3.meters << "m " << l3.centimeters << "cm";
    return 0;
}