#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Parameterized Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person person1("John", 25);
    person1.displayInfo();
    return 0;
}