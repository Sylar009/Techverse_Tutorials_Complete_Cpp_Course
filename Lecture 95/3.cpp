#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animals make sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog dog1;
    dog1.sound();
    return 0;
}