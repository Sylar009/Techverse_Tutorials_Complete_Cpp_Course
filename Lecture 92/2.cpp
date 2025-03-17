#include <iostream>
using namespace std;

class Sample {
public:
    Sample() { cout << "Constructor Called!\n"; }
    ~Sample() { cout << "Destructor Called!\n"; }
};

int main() {
    // Using new and delete
    Sample* obj1 = new Sample;
    delete obj1;

    // Using malloc and free
    Sample* obj2 = (Sample*)malloc(sizeof(Sample));
    free(obj2);

    return 0;
}