#include <iostream>
using namespace std;

class MyClass {
    private:
        int secret = 42;

    public:
        friend void revealSecret(MyClass obj);
};

void revealSecret(MyClass obj) {
    cout << "Secret is: " << obj.secret << endl;
}

int main() {
    MyClass obj;
    revealSecret(obj);
    return 0;
}
