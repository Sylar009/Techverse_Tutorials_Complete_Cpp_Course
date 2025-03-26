#include <iostream>
using namespace std;

enum StudentRollNo {
    Arjun = 10,
    Riya = 15,
    Kunal = 20
};

int main() {
    StudentRollNo student = Arjun;
    cout << "Roll number of Arjun: " << student << endl;
    return 0;
}
