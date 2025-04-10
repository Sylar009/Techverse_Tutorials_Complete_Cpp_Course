#include <iostream>
using namespace std;

class BaseError {};
class DerivedError : public BaseError {};

int main() {
    for (int i = 1; i <= 2; i++) {
        try {
            if (i == 1) throw BaseError();
            if (i == 2) throw DerivedError();
        } 
        catch (BaseError) {
            cout << "Caught exception of BaseError class." << endl;
        }
    }
    return 0;
}
