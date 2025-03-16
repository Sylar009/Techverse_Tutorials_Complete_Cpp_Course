#include <iostream>
using namespace std;

// Defining an Enum for Gender
enum Gender { Male, Female };

int main() {
    // Initializing enum variable
    Gender personGender = Male;

    // Using switch case with enum
    switch (personGender) {
    case Male:
        cout << "Gender is Male" << endl;
        break;
    case Female:
        cout << "Gender is Female" << endl;
        break;
    default:
        cout << "Invalid Gender" << endl;
    }
    return 0;
}
