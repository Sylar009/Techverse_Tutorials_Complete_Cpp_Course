#include <iostream>
#include <string>
using namespace std;

void printSubstrings(string str) {
    int n = str.length();
    for (int i = 0; i < n; i++) {
        for (int len = 1; len <= n - i; len++) {
            cout << str.substr(i, len) << endl;
        }
    }
}

int main() {
    string input = "abc";
    printSubstrings(input);
    return 0;
}