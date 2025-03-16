#include <iostream>
#include <string>

int main() {
    std::string text = "I like apples.";
    text.replace(7, 6, "mangoes");
    text.insert(2, " really");
    text.erase(0, 2);

    std::cout << text << std::endl;
    return 0;
}