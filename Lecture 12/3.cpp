#include <iostream>
using namespace std;

class Sample {
public:
    static void showMessage() {
        cout << "Static Function Called!" << endl;
    }
};

int main() {
    Sample::showMessage(); // Calling static function
    return 0;
}