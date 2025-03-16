#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string text = "Learn programming with Techverse";
    vector<string> tokens;
    stringstream stream(text);
    string word;

    while (getline(stream, word, ' ')) {
        tokens.push_back(word);
    }

    for (const auto& token : tokens) {
        cout << token << endl;
    }
    return 0;
}
