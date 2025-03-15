#include <iostream>
using namespace std;
int main() {
    int values[4] = {5, 10, 15, 20};
    cout << "First element: " << *values << endl;
    cout << "Second element: " << *(values + 1) << endl;
    return 0;
}