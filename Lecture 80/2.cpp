#include <iostream>
using namespace std;

typedef struct {
    int id;
    float salary;
} Employee;

int main() {
    Employee emp1;
    emp1.id = 2001;
    emp1.salary = 50000.50;

    cout << "Employee ID: " << emp1.id << endl;
    cout << "Employee Salary: " << emp1.salary << endl;

    return 0;
}