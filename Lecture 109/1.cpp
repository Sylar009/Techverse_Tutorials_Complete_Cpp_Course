#include <iostream>
using namespace std;

class Learner {
public:
    static int counter; // Static member

    Learner() { counter++; } // Constructor
};

int Learner::counter = 0;

int main() {
    Learner l1;
    cout << "Number of learners: " << l1.counter << endl;

    Learner l2;
    cout << "Number of learners: " << l2.counter << endl;

    return 0;
}