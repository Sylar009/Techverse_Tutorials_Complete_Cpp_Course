#include <iostream>
#include <algorithm>
using namespace std;

// Functor to increment by a given value
class Increment {
private:
    int value;
public:
    Increment(int val) : value(val) {}

    // Overloading operator() to add value
    int operator()(int num) const {
        return num + value;
    }
};

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int incrementBy = 5;

    // Using transform with functor
    transform(numbers, numbers + size, numbers, Increment(incrementBy));

    // Display the modified array
    for (int value : numbers)
        cout << value << " ";

    return 0;
}
