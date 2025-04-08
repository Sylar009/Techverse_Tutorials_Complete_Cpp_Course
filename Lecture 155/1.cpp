#include <iostream>
using namespace std;

class Entity {
public:
    virtual void performAction() = 0; // Pure virtual function
};

class Player : public Entity {
public:
    void performAction() override {
        cout << "Player is attacking!\n";
    }
};

int main() {
    Player p;
    p.performAction();
    return 0;
}