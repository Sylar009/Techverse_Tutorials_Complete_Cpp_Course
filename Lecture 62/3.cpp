#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

void display(const Person &p) {
    cout << "Name: " << p.name << ", Age: " << p.age << endl;
}

int main() {
    Person individual = {"Techverse", 25};
    display(individual);
    return 0;
}