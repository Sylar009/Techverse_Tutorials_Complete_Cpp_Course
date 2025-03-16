#include <stdio.h>

// Declaration of the structure Student
struct Student {
    int rollNumber;
    char grade;
    float marks[4]; // Array within the structure
};

// Function to display student details
void displayDetails(struct Student s) {
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Grade: %c\n", s.grade);
    printf("Marks:\n");
    for (int i = 0; i < 4; i++) {
        printf("Subject %d: %.2f\n", i + 1, s.marks[i]);
    }
}

int main() {
    // Initialize structure
    struct Student student1 = {101, 'A', {85.5, 90.0, 78.5, 88.0}};
    
    // Display details
    displayDetails(student1);
    return 0;
}