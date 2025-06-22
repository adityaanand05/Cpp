#include <iostream>

using namespace std;

int main() {
    int a = 10;
    double b = 5.5;
    // Implicit casting
    double c = a; // int to double
    cout << "Implicit casting: " << c << endl;

    // Explicit casting
    int d = (int)b; // double to int
    cout << "Explicit casting: " << d << endl;

    return 0;
}