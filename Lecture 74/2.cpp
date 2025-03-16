#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "TechVerse Tutorials";
    text.resize(10);
    cout << "After resize: " << text << endl;
    cout << "Capacity: " << text.capacity() << endl;
    text.shrink_to_fit();
    cout << "After shrink_to_fit: " << text.capacity() << endl;
    return 0;
}