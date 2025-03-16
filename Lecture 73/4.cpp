#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "Techverse Tutorials";
    cout << "Length: " << text.length() << endl;
    text.replace(0, 9, "Welcome to");
    cout << "After replace: " << text << endl;
    cout << "Substring: " << text.substr(11, 8) << endl;
    return 0;
}