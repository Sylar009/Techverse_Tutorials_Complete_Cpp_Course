#include <iostream>
using namespace std;

// Define structure
struct Student {
    int rollNo;
    char grade;
    float marks;
};

int main() {
    Student s1;
    s1.rollNo = 101;
    s1.grade = 'A';
    s1.marks = 95.5;

    cout << "Roll Number: " << s1.rollNo << endl;
    cout << "Grade: " << s1.grade << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}