#include <iostream>
using namespace std;

class Manager {
private:
    ~Manager() { cout << "Destructor called.\n"; }

public:
    Manager() { cout << "Constructor called.\n"; }
    void destroy() { delete this; }
};

int main() {
    Manager* obj = new Manager;
    obj->destroy();
    return 0;
}
