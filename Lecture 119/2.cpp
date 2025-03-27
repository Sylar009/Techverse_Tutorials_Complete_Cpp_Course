#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    void setLength(int len) {
        length = len;
    }

    int getLength() {
        return length;
    }
};

int main() {
    Box myBox;
    myBox.setLength(15);
    cout << "Length of the box: " << myBox.getLength() << endl;
    return 0;
}
