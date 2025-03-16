#include <iostream>
using namespace std;

// Define a self-referential structure
struct Node {
    int numData;
    char charData;
    Node* nextNode; // Pointer to the next node
};

int main() {
    Node firstNode; // First node
    firstNode.nextNode = NULL; // Initialize pointer
    firstNode.numData = 10;
    firstNode.charData = 'A';

    Node secondNode; // Second node
    secondNode.nextNode = NULL; // Initialize pointer
    secondNode.numData = 20;
    secondNode.charData = 'B';

    // Link the first node to the second node
    firstNode.nextNode = &secondNode;

    // Accessing second node's data via first node
    cout << "Second Node Numeric Data: " << firstNode.nextNode->numData << endl;
    cout << "Second Node Character Data: " << firstNode.nextNode->charData << endl;

    return 0;
}
