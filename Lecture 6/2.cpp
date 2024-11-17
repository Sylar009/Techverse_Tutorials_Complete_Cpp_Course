#include <iostream>
using namespace std;

class Calci {
  
  public:
    // defining interger variable var_1
    int var_1 = 80;

    // defining interger variable var_2
    int var_2 = 50;

    // defining a function add()
    // which calculate the sum of 2 variables
    int add() {
        int res = var_1 + var_2;
        return res;
    }
};
int main() {
    Calci add;
    cout << add.add() << endl;
    return 0;
}