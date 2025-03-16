#include <iostream>
#include <string>
using namespace std;

int main() {
    string data = "Tech:Verse";
    int pos = data.find(":");
    string result = data.substr(pos + 1);
    cout << "Substring is: " << result << endl;
    return 0;
}