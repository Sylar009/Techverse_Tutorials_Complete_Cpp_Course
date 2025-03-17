#include <iostream>
using namespace std;

class Sample {
public:
    Sample() { cout << "Constructor Called!\n"; }
};

int main() {
    // Using new
    Sample* obj1 = new Sample;
    cout << "Object created using new!\n";

    // Using malloc
    Sample* obj2 = (Sample*)malloc(sizeof(Sample));
    cout << "Object created using malloc!\n";

    return 0;
}