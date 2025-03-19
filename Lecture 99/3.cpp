#include <iostream>
using namespace std;

class Student {
    int roll;

public:
    Student(int r) { roll = r; }  // Parameterized Constructor
    Student(const Student& s) { roll = s.roll; }  // Copy Constructor

    void display() { cout << "Roll: " << roll << endl; }
};

int main() {
    Student s1(10);   // Original Object
    Student s2 = s1;  // Copy Constructor called
    s2.display();
    return 0;
}
