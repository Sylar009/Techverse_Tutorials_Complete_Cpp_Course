#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        int num = 10, denom = 0, result;
        if (denom == 0) {
            throw runtime_error("Division by zero!");
        }
        result = num / denom;
        cout << "Result: " << result << endl;
    } catch (const exception &e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}