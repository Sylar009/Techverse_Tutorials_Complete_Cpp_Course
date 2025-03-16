#include <iostream>
using namespace std;

// Defining an Enum for Months
enum Months {
    Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

int main() {
    // Loop through the values of enum
    for (int i = Jan; i <= Dec; i++) {
        cout << i << " ";
    }
    return 0;
}
