#include <iostream>  
using namespace std;  

enum Days { Monday, Tuesday, Wednesday };  

int main() {  
    Days today = Wednesday;  
    cout << "Day index: " << today;  
    return 0;  
}  