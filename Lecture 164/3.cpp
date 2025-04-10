#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;
    file.open("sample.txt", ios::out | ios::in | ios::trunc);
    file << "Welcome to Techverse!\n";
    file.seekg(0, ios::beg);
    string content;
    while (getline(file, content)) {
        cout << content << endl;
    }
    file.close();
    return 0;
}