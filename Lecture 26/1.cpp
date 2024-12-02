#include <iostream> 
using namespace std; 

int main() { 
    // Initialize variables 
    int userAge = 22; 
    bool hasStudentID = true; 

    // Logical AND operator in condition 
    if (userAge > 18 && hasStudentID) { 
        cout << "You are eligible for the student discount." << endl; 
    } else { 
        cout << "You are not eligible for the student discount." << endl; 
    } 

    return 0; 
}