#include <iostream>
using namespace std;

class Controller {
private:
    ~Controller() {}

public:
    friend void destroyObject(Controller*);
};

void destroyObject(Controller* obj) {
    delete obj;  // Only friend function can delete
}

int main() {
    Controller* obj = new Controller;
    destroyObject(obj);
    return 0;
}
