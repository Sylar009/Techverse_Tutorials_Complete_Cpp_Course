#include <iostream>
using namespace std;

class Vehicle {
    char model[20];
    int id;

public:
    void getDetails() {
        cout << "Enter model name: ";
        cin >> model;
        cout << "Enter ID: ";
        cin >> id;
    }
    void displayDetails() {
        cout << "Model: " << model << ", ID: " << id << endl;
    }
};

int main() {
    Vehicle car1; // car1 is an object
    car1.getDetails();
    car1.displayDetails();
    return 0;
}