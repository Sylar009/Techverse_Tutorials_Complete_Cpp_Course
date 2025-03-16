#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    Student(int r) { rollNo = r; }
};

int main() {
    Student obj(101);
    cout << "Roll Number: " << obj.rollNo;
    return 0;
}
