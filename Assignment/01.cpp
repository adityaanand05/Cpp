// Write a program that declares variables to store the type of tea, its price per kilogram (float), and its rating (char). 
// Use data types effectively and print them in a formatted output using escape sequences.

#include <iostream>
#include<string>
using namespace std;

int main() {
    // Variable declarations
    string teaType;
    float pricePerKg;
    char rating;

    // Input
    cout << "Enter the type of tea: ";
    getline(cin, teaType);

    cout << "Enter the price per kilogram: ";
    cin >> pricePerKg;

    cout << "Enter the rating (A/B/C): ";
    cin >> rating;

    // Formatted Output using escape sequences
    cout << "\n\t--- Tea Details ---\n";
    cout << "\tType of Tea     : " << teaType << "\n";
    cout << "\tPrice per Kg    : $" << pricePerKg << "\n";
    cout << "\tRating          : " << rating << "\n";

    return 0;
}