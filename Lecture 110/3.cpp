#include <iostream>
using namespace std;

class SelfDestroy {
private:
    int data;

public:
    SelfDestroy(int val) : data(val) {}
    void destroy() {
        delete this; // Self-destruction
    }
    void display() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    SelfDestroy *obj = new SelfDestroy(100);
    obj->display();
    obj->destroy();
    // Uncommenting the next line causes undefined behavior
    // obj->display();
    return 0;
}
