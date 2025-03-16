#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;

    void displayDetails() {
        cout << "Roll No: " << rollNo << "\n";
        cout << "Name: " << name << "\n";
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1 = {101, "Aman", 89.5};
    s1.displayDetails();
    return 0;
}