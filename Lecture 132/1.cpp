#include <iostream>
using namespace std;

int main(int a) { cout << a; return 0; }
int main(char *str) { cout << str; return 0; }

int main() {
    main(5);
    main("C++");
    return 0;
}
