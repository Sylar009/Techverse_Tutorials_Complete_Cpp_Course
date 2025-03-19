#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    Student(int r, string n) {  // Parameterized Constructor
        roll = r;
        name = n;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s(1, "Aman");  // Constructor with arguments
    s.display();
    return 0;
}
