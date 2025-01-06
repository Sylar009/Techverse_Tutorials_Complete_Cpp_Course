#include <iostream>
using namespace std;

int main() {
    int num = 7;
    if (num % 2 == 0)
        goto even;
    else
        goto odd;

even:
    cout << num << " is even.\n";
    return 0;

odd:
    cout << num << " is odd.\n";
    return 0;
}