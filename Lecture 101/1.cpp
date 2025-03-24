#include <iostream>
#include <string>
using namespace std;

class Student {
    int rollNo;
    string studentName;
    double fees;

public:
    // Parameterized constructor
    Student(int r, string name, double f) :
        rollNo(r),
        studentName(name),
        fees(f) {}

    // Copy constructor
    Student(const Student &obj) {
        rollNo = obj.rollNo;
        studentName = obj.studentName;
        fees = obj.fees;
        cout << "Copy Constructor Invoked!" << endl;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << studentName 
        << ", Fees: " << fees << endl;
    }
};

int main() {
    Student s1(101, "Aman", 15000);
    s1.display();

    Student s2(s1); // Copy constructor called
    s2.display();

    return 0;
}
