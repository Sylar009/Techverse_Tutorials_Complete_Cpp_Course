#include <iostream>
using namespace std;

// Define a structure with multiple links
struct Node {
    int value;
    Node* previousNode;
    Node* nextNode;
};

int main() {
    Node node1, node2, node3; // Three nodes

    // Initialize first node
    node1.previousNode = NULL;
    node1.nextNode = &node2;
    node1.value = 10;

    // Initialize second node
    node2.previousNode = &node1;
    node2.nextNode = &node3;
    node2.value = 20;

    // Initialize third node
    node3.previousNode = &node2;
    node3.nextNode = NULL;
    node3.value = 30;

    // Traversing forward
    cout << node1.value << " -> " << node1.nextNode->value << " -> " 
    << node1.nextNode->nextNode->value << endl;

    // Traversing backward
    cout << node3.value << " -> " << node3.previousNode->value << " -> " 
    << node3.previousNode->previousNode->value << endl;

    return 0;
}
