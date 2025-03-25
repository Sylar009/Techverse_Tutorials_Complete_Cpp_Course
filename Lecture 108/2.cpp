#include <iostream>  
using namespace std;  

class Data {  
public:  
    static int sharedValue;  
    Data() { cout << "Object Created\n"; }  
};  

int Data::sharedValue = 100;  

int main() {  
    cout << "Static Value: " << Data::sharedValue << endl;  

    Data obj1, obj2;  
    obj1.sharedValue = 200;  
    cout << "Updated Static Value: " << Data::sharedValue << endl;  

    return 0;  
}  
