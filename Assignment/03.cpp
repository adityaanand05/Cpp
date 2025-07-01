// Q2. Find the Largest of Three
// Problem:
// Given three integers, find and print the largest.

// Inputs:

// int a, b, c

// Condition:
// Use only conditional statements and relational operators. Avoid using built-in max().

// Focus: if, else, >, >=

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter yor first number :";
    cin >> num1;
    cout << "Enter yor second number :";
    cin >> num2;
    cout << "Enter yor third number :";
    cin >> num3;
    if (num1 >= num2 && num1 >= num3)
    {
        cout << num1 << " is greatest\n";
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        cout << num2 << " is greatest\n";
    }
    else
    {
        cout << num3 << " is greatest\n";
    }
    return 0;
}