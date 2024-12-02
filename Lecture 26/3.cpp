#include <iostream> 
using namespace std; 

int main() { 
    bool isUserLoggedIn = false; 

    // Logical NOT operator 
    if (!isUserLoggedIn) { 
        cout << "Please log in to continue." << endl; 
    } else { 
        cout << "Welcome to the application!" << endl; 
    } 

    return 0; 
}