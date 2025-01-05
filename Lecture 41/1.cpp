#include <iostream>  
using namespace std;  

int main() {  
    char choice = 'A';  
    switch (choice) {  
        case 'A':  
            cout << "You selected Option A.";  
            break;  
        case 'B':  
            cout << "You selected Option B.";  
            break;  
        default:  
            cout << "Invalid Option.";  
    }  
    return 0;  
}  