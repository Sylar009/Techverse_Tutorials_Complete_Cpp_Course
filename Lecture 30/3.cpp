#include<iostream>
using namespace std;

class StaticDemo {
    static int count; 
public:
    static int value;
    void show(int count) {
        cout << "Static count: " << StaticDemo::count << endl;
        cout << "Local count: " << count << endl;
    }
};
int StaticDemo::count = 100;
int StaticDemo::value = 200;

int main() {
    StaticDemo obj;
    obj.show(50);
    cout << "Static value: " << StaticDemo::value << endl;
    return 0;
}
