#include <iostream>
#include <limits.h>  // For integer and char macros
#include <float.h>   // For float and double macros

using namespace std;

int main() {
    // Displaying ranges for various data types
    cout << "Character range: " << CHAR_MIN << " to " << CHAR_MAX << endl;
    cout << "Integer range: " << INT_MIN << " to " << INT_MAX << endl;
    cout << "Unsigned Integer max: " << UINT_MAX << endl;
    cout << "Float range: " << FLT_MIN << " to " << FLT_MAX << endl;
    cout << "Double range: " << DBL_MIN << " to " << DBL_MAX << endl;

    return 0;
}