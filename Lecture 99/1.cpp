#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    Student() {  // Default Constructor
        roll = 0;
        name = "Unknown";
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s;  // Constructor called
    s.display();
    return 0;
}
