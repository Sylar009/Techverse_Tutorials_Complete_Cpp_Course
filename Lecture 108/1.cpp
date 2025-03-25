#include <iostream>  
using namespace std;  

class Counter {  
public:  
    static int total;  
    Counter() { total++; }  
};  

// Initialize the static member  
int Counter::total = 0;  

int main() {  
    Counter obj1, obj2;  
    cout << "Total Objects: " << Counter::total << endl;  
    return 0;  
}  
