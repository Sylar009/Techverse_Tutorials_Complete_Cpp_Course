#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

int sumOfNumericSubstrings(string num) {
    vector<int> substrValues;
    int n = num.length();
    for (int i = 0; i < n; i++) {
        for (int len = 1; len <= n - i; len++) {
            substrValues.push_back(stoi(num.substr(i, len)));
        }
    }
    return accumulate(substrValues.begin(), substrValues.end(), 0);
}

int main() {
    string num = "123";
    cout << "Sum of numeric substrings: " << sumOfNumericSubstrings(num) << endl;
    return 0;
}