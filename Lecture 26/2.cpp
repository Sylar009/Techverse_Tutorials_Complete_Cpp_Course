#include <iostream> 
using namespace std; 

int main() { 
    int score = 5; 

    // Logical OR operator in condition 
    if (score < 0 || score > 10) { 
        cout << "The score is outside the valid range (0-10)." << endl; 
    } else { 
        cout << "The score is within the valid range." << endl; 
    } 

    return 0; 
}