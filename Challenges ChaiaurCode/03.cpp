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

#include <iostream>

using namespace std;

int main() {
    int age , order;
    cout << "Enter current Time (in 24 hr clock) : ";
    cin >> age;
    if (age >= 18 )
    {
        cout << "Welcome the Shop is open" << endl;
        
    }
    else{
        cout << "Sorry the Shop is closed" << endl;
        
    }
    return 0;
}
// Challenge 3: Nested If-Else
// Write a program that checks the temperature of tea water input by the user:
// If the temperature is above 100°C, print "Too hot!"
// If the temperature is between 80°C and 100°C, print "Perfect temperature."
// If the temperature is below 80°C, print "Too cold!"

#include <iostream>

using namespace std;

int main() {
    int temp;
    cout << "Enter tea temperature in °C : ";

    if (temp>100)
    {
        cout<< "Too hot!";
    }else if (temp<=100&&temp>=80)
    {
        cout << "Perfect temperature";
    }else if (temp<80)
    {
        cout << "Too cold!";
    }
    
    return 0;
}

// Challenge 4: Switch Case
// Write a program that offers different tea brewing methods. 
//The user selects a method (1 for Boiling, 2 for Steeping, 3 for Iced Tea), and the program prints the instructions for the selected brewing method. 
//Use a switch statement to handle the selections.


#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Select a tea brewing method:\n";
    cout << "1. Boiling\n";
    cout << "2. Steeping\n";
    cout << "3. Iced Tea\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Boiling Method:\n";
            cout << "- Boil water to 100°C.\n";
            cout << "- Add tea leaves and boil for 3-5 minutes.\n";
            cout << "- Strain and serve hot.\n";
            break;
        case 2:
            cout << "Steeping Method:\n";
            cout << "- Heat water to 80-85°C (for green tea).\n";
            cout << "- Pour over tea leaves in a teapot or cup.\n";
            cout << "- Steep for 3-4 minutes.\n";
            cout << "- Strain and enjoy.\n";
            break;
        case 3:
            cout << "Iced Tea Method:\n";
            cout << "- Brew tea using boiling or steeping method.\n";
            cout << "- Let it cool to room temperature.\n";
            cout << "- Pour over ice and add lemon or sugar if desired.\n";
            break;
        default:
            cout << "Invalid choice. Please select 1, 2, or 3.\n";
            break;
    }

    return 0;
}
