#include <iostream>
using namespace std;

class Resource {
    int* data;

public:
    Resource(int value) {
        data = new int(value);
    }

    Resource(Resource&& obj) {  // Move Constructor
        data = obj.data;
        obj.data = nullptr;
    }

    void display() {
        if (data)
            cout << "Data: " << *data << endl;
        else
            cout << "Resource is empty." << endl;
    }

    ~Resource() { delete data; }
};

int main() {
    Resource res1(10);
    Resource res2 = move(res1);  // Move Constructor
    res2.display();
    res1.display();
    return 0;
}
