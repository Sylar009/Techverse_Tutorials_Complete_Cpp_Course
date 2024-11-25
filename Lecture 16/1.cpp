#include <iostream>  
using namespace std;  

class Person {  
public:  
    string name;  
    void displayName() {  
        cout << "Name: " << name;  
    }  
};  

int main() {  
    Person p;  
    p.name = "Techverse";  
    p.displayName();  
    return 0;  
}  