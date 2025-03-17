#include <iostream>
using namespace std;

class Resource {
public:
    int id;
    
    Resource(int i) : id(i) {
        cout << "Resource " << id << " allocated." << endl;
    }

    ~Resource() {
        cout << "Resource " << id << " deallocated." << endl;
    }
};

int main() {
    Resource res1(1);
    {
        Resource res2(2);
    }
    return 0;
}