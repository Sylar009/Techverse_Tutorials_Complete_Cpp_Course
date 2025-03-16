#include <stdio.h>

// Declaration of the structure Class
struct Class {
    int rollNumber;
    char grade;
    float averageMarks;
};

// Function to display class records
void displayClassRecords(struct Class records[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Roll Number: %d\n", records[i].rollNumber);
        printf("Grade: %c\n", records[i].grade);
        printf("Average Marks: %.2f\n\n", records[i].averageMarks);
    }
}

int main() {
    // Initialize an array of structures
    struct Class classRecords[3] = {
        {101, 'A', 89.5},
        {102, 'B', 75.0},
        {103, 'C', 68.5}
    };

    // Display records
    displayClassRecords(classRecords, 3);
    return 0;
}