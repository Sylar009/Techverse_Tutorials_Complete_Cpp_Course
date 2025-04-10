#include <iostream>
using namespace std;

class ErrorType1 {};
class ErrorType2 {};

int main() {
    for (int i = 1; i <= 2; i++) {
        try {
            if (i == 1) throw ErrorType1();
            if (i == 2) throw ErrorType2();
        } 
        catch (ErrorType1) {
            cout << "Caught exception of ErrorType1 class." << endl;
        } 
        catch (ErrorType2) {
            cout << "Caught exception of ErrorType2 class." << endl;
        }
    }
    return 0;
}
