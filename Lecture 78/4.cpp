#include <iostream>
#include <regex>
#include <vector>
using namespace std;

vector<string> tokenize(const string& text, const regex& pattern) {
    vector<string> 
        tokens(sregex_token_iterator(text.begin(), text.end(), pattern, -1), {});
    tokens.erase(remove_if(tokens.begin(), tokens.end(), [](const string& s) 
        { return s.empty(); }), tokens.end());
    return tokens;
}

int main() {
    string text = "Code, Learn | Explore, Innovate";
    regex pattern(R"([,| ]+)");
    vector<string> tokens = tokenize(text, pattern);

    for (const auto& token : tokens) {
        cout << token << endl;
    }

    return 0;
}
