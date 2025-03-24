#include <iostream>
using namespace std;

static int counter = 0;

class Tracker {
public:
    Tracker() {
        counter++;
        cout << "Object Created: " << counter << endl;
    }
    ~Tracker() {
        cout << "Object Destroyed: " << counter << endl;
        counter--;
    }
};

int main() {
    Tracker obj1, obj2, obj3;
    return 0;
}
