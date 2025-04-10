#include <iostream>
using namespace std;

int main() {
    try {
        throw 42;
    } catch (const char* msg) {
        cout << "Caught: " << msg << endl;
    } catch (...) {
        cout << "Default Exception!" << endl;
    }
    return 0;
}