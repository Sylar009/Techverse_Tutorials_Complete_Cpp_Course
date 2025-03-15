#include <stdio.h>
#include <string.h>

// Employee structure
struct Employee {
    char name[100];
    char role[100];
};

// Function to print Employee details
void displayEmployee(const struct Employee* emp) {
    printf("Name: %s\n", emp->name);
    printf("Role: %s\n", emp->role);
}

int main() {
    struct Employee emp = {"John Doe", "Developer"};
    displayEmployee(&emp);
    return 0;
}
