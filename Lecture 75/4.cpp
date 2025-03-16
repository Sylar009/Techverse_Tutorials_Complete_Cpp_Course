#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> colors = {"Green", "Purple", "Orange"};
    colors.push_back("Pink");

    for (const auto& color : colors) {
        cout << color << "\n";
    }

    return 0;
}