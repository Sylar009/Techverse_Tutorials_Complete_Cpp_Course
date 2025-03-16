#include <iostream>
using namespace std;

union Data {
    int num;
    char letter;
    float decimal;
};

int main() {
    Data d1;
    d1.num = 42;
    cout << "Integer: " << d1.num << endl;

    d1.letter = 'X';
    cout << "Character: " << d1.letter << endl;

    d1.decimal = 3.14;
    cout << "Float: " << d1.decimal << endl;

    return 0;
}