#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    cout << "Initial String: " << text << endl;
    text.push_back('X');
    cout << "After push_back: " << text << endl;
    text.pop_back();
    cout << "After pop_back: " << text << endl;
    return 0;
}