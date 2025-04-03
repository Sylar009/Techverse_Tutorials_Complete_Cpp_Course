#include <iostream>
#include <algorithm>
using namespace std;

// Function to increment value
int incrementValue(int num) { 
    return num + 1; 
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Using transform to increment each element
    transform(numbers, numbers + size, numbers, incrementValue);

    // Display the modified array
    for (int value : numbers)
        cout << value << " ";

    return 0;
}
