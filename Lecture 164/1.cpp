#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myFile("data.txt");
    myFile << "Hello, Techverse!";
    myFile.close();
    return 0;
}