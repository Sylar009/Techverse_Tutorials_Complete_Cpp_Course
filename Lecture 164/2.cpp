#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream myFile("data.txt");
    string line;
    while (getline(myFile, line)) {
        cout << line << endl;
    }
    myFile.close();
    return 0;
}