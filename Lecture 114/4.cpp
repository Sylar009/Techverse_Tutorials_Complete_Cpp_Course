#include <iostream>
using namespace std;

enum class EyeColor : char { Brown = 'B', Blue = 'U', Green = 'G' };

int main() {
    EyeColor myEyeColor = EyeColor::Blue;
    cout << "Eye color code: " << char(myEyeColor) << endl;
    return 0;
}
