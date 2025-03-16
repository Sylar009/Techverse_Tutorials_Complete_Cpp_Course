#include <iostream>
#include <string>

int main() {
    std::string greeting = "Welcome to TechVerse!";
    std::cout << "Greeting: " << greeting << std::endl;

    // Length
    std::cout << "Length: " << greeting.length() << std::endl;

    // Access
    std::cout << "First Character: " << greeting.at(0) << std::endl;

    // Modify
    greeting.replace(11, 9, "C++ Programming");
    std::cout << "Modified: " << greeting << std::endl;

    return 0;
}