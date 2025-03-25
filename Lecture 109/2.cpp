#include <iostream>
using namespace std;

class Box {
private:
    static int length, breadth, height; // Static members

public:
    static void displayDimensions() { // Static function
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Height: " << height << endl;
    }
};

int Box::length = 10;
int Box::breadth = 20;
int Box::height = 30;

int main() {
    Box::displayDimensions();
    return 0;
}