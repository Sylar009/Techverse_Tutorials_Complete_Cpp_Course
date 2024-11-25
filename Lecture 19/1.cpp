#include <iostream>
using namespace std;

int main() {
    int num = 20;  // Integer variable
    char letter = 'b';  // Character variable (ASCII of 'b' = 98)

    // Implicit conversion
    num = num + letter; 
    float result = num + 1.5; 

    cout << "Updated num = " << num << endl;
    cout << "Result = " << result << endl;
    return 0;
}