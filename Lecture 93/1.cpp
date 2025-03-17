#include <iostream>
using namespace std;

void exampleLeak() {
    int* mem = new int(10);
    // Forgetting to free memory
    return;
}

int main() {
    exampleLeak();
    return 0;
}
