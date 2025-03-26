#include <iostream>
using namespace std;

enum class Color { Red, Green, Blue };
enum class TrafficLight { Red, Yellow, Green };

int main() {
    Color myColor = Color::Red;
    TrafficLight signal = TrafficLight::Green;

    // Uncommenting the below line will throw error
    // if (myColor == signal)

    if (myColor == Color::Red) {
        cout << "It's Red Color" << endl;
    }

    cout << "Enum class ensures type safety!" << endl;
    return 0;
}
