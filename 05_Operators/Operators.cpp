#include <iostream>

using namespace std;

int main() {
    // Demonstrating basic arithmetic operations
    cout<< 2+5 << endl; // Addition
    cout<< 10-3 << endl; // Subtraction
    cout<< 4*7 << endl; // Multiplication
    cout<< 20/4 << endl; // Division
    cout<< 20%3 << endl; // Modulus
    cout<< 2+3*4 << endl; // Operator precedence (Multiplication before Addition)
    cout<< (2+3)*4 << endl; // Parentheses to change precedence
    cout<< 2+3*4-5 << endl; // Combined operations with precedence
    cout<< 2+3*4-5/2 << endl; // Combined operations with precedence and division
    cout<< 2+3*4-5/2%3 << endl; // Combined operations with precedence, division, and modulus

    // Demonstrating Assignment operators
    int a = 10;
    cout << "Initial value of a: " << a << endl;
    a += 5;
    cout << "After += 5, a: " << a << endl;
    a -= 3;
    cout << "After -= 3, a: " << a << endl;
    a *= 2;
    cout << "After *= 2, a: " << a << endl;
    a /= 4;
    cout << "After /= 4, a: " << a << endl;
    a %= 3;
    cout << "After %= 3, a: " << a << endl;

    // Demonstrating Relational operators
    int b = 15;
    cout << "Initial value of b: " << b << endl;
    cout << "b == 15: " << (b == 15) << endl;
    cout << "b != 10: " << (b != 10) << endl;
    cout << "b > 10: " << (b > 10) << endl;
    cout << "b < 20: " << (b < 20) << endl;
    cout << "b >= 15: " << (b >= 15) << endl;
    cout << "b <= 20: " << (b <= 20) << endl;

    // Demonstrating Logical operators
    bool x = true;
    bool y = false;
    cout << "x && y: " << (x && y) << endl;
    cout << "x || y: " << (x || y) << endl;
    cout << "!x: " << (!x) << endl;

    // Demonstrating Bitwise operators
    int m = 5; // 0101 in binary
    int n = 3; // 0011 in binary
    cout << "m & n: " << (m & n) << endl; // Bitwise AND
    cout << "m | n: " << (m | n) << endl; // Bitwise OR
    cout << "m ^ n: " << (m ^ n) << endl; // Bitwise XOR
    cout << "~m: " << (~m) << endl;       // Bitwise NOT
    cout << "m << 1: " << (m << 1) << endl; // Left shift
    cout << "m >> 1: " << (m >> 1) << endl; // Right shift

    // Demonstrating Increment and Decrement operators
    int p = 10;
    cout << "Initial value of p: " << p << endl;
    p++;
    cout << "After p++, p: " << p << endl;
    p--;
    cout << "After p--, p: " << p << endl;
    ++p;
    cout << "After ++p, p: " << p << endl;
    --p;
    cout << "After --p, p: " << p << endl;

    
    return 0;
}