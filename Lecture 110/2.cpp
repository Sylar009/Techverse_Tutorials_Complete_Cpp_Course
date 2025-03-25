#include <iostream>
using namespace std;

class Chain {
private:
    int x, y;

public:
    Chain &setX(int val) {
        x = val;
        return *this; // Returning the current object
    }
    Chain &setY(int val) {
        y = val;
        return *this; // Returning the current object
    }
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Chain obj;
    obj.setX(10).setY(20); // Chained calls
    obj.display();
    return 0;
}
