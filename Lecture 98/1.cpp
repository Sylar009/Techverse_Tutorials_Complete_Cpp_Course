#include <iostream>
using namespace std;

class LinkedList {
private:
    int data;

protected:
    int length;

public:
    LinkedList() : data(42), length(10) {}

    friend class Node; // Friend class declaration
};

class Node {
public:
    void display(const LinkedList& list) {
        cout << "Data: " << list.data << endl;
        cout << "Length: " << list.length << endl;
    }
};

int main() {
    LinkedList ll;
    Node node;
    node.display(ll);
    return 0;
}