#include <iostream>

using namespace std;

int main() {
    unsigned smallTeaPeack = 100; // Integer
    unsigned smallTeaPeack01 = -100; // Integer
    cout << smallTeaPeack << endl;
    cout << smallTeaPeack01 << endl;// This will not compile because unsigned cannot hold negative values. It will give a garbage value or an error depending on the compiler settings.
    return 0;
}