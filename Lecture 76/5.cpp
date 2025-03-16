#include <iostream>
#include <string>

int main() {
    std::string text = "I love programming.";
    text.replace(7, 4, "C++");
    std::cout << "Modified: " << text << std::endl;
    return 0;
}