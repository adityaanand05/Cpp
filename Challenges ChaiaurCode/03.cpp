// Challenges for Students
// Challenge 1: If Statement
// Write a program that asks the user for their favorite tea. 
//If they choose "Oolong," print a message saying, "You have excellent taste!"
#include <iostream>
#include <string>
using namespace std;

int main() {
    string teaOrder ;
    cout << "Give me your order : ";
    getline(cin,teaOrder);
    if (teaOrder == "Oolong Tea")
    {
        cout << "You have excellent taste!" << endl;
        
    }
    
    return 0;
}
// Challenge 2: If-Else Statement
// Create a program that asks the user for their age. 
//If the user is older than 18, allow them to proceed with purchasing tea; otherwise, print a message saying they are too young to purchase.

// Challenge 3: Nested If-Else
// Write a program that checks the temperature of tea water input by the user:
// If the temperature is above 100°C, print "Too hot!"
// If the temperature is between 80°C and 100°C, print "Perfect temperature."
// If the temperature is below 80°C, print "Too cold!"


// Challenge 4: Switch Case
// Write a program that offers different tea brewing methods. 
//The user selects a method (1 for Boiling, 2 for Steeping, 3 for Iced Tea), and the program prints the instructions for the selected brewing method. 
//Use a switch statement to handle the selections.
