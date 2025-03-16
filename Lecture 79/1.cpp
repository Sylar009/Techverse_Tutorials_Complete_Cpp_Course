#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "TechVerse";
    string result = text.substr(4, 4);
    cout << "Substring is: " << result << endl;
    return 0;
}