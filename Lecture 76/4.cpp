#include <iostream>
#include <string>

int main() {
    std::string str1 = "Tech";
    std::string str2 = "Verse";
    if (str1 == str2) {
        std::cout << "Strings are equal" << std::endl;
    } else {
        std::cout << "Strings are not equal" << std::endl;
    }
    return 0;
}