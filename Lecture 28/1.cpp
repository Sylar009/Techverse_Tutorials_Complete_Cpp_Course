#include <iostream>
using namespace std;

int main() {
    int score = 35, result;
    result = score < 40 ? 10 : score + 10;
    cout << "Result: " << result - score << endl;
    return 0;
}