#include <iostream>
using namespace std;

class CustomError {
    // User-defined empty class for demonstration
};

int main() {
    try {
        // Throwing an exception of CustomError type
        throw CustomError();
    } 
    catch (CustomError) {
        cout << "Exception of CustomError class caught!" << endl;
    }
    return 0;
}
