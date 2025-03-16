#include <iostream>
#include <string>

int main() {
    std::string text = "C++ Programming";
    std::string sub = text.substr(4, 11); // Extract "Programming"
    size_t pos = text.find("Programming");

    std::cout << "Substring: " << sub << std::endl;
    std::cout << "Found at position: " << pos << std::endl;
    return 0;
}
