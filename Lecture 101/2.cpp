#include <iostream>
#include <cstring>
using namespace std;

class String {
    char *data;
    int length;

public:
    // Constructor
    String(const char *str) {
        length = strlen(str);
        data = new char[length + 1];
        strcpy(data, str);
    }

    // Copy Constructor for Deep Copy
    String(const String &obj) {
        length = obj.length;
        data = new char[length + 1];
        strcpy(data, obj.data);
        cout << "Deep Copy Constructor Called!" << endl;
    }

    // Destructor
    ~String() { delete[] data; }

    void display() { cout << "String: " << data << endl; }
};

int main() {
    String str1("TechVerse");
    str1.display();

    String str2(str1); // Deep Copy Constructor
    str2.display();

    return 0;
}
