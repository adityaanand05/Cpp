// Challenges for Students
// Challenge 1: While Loop
// Write a program that keeps asking the user to input the number of tea bags they have left. 
//Stop when the number of bags is 0, and print a message that they are out of tea bags.

// #include <iostream>

// using namespace std;

// int main() {
//     int numteabags;
//     cout << "Enter Numbers of tea bag : ";
//     cin >> numteabags;
//     while (numteabags>0)
//     {
//         numteabags--;
//         cout << "Enjoy your tea\n";
//         cout << "You have " << numteabags <<" remaning\n";
//     }
//     cout << "Now, Ypu are out of bags";
//     return 0;
// }

// Challenge 2: Do-While Loop
// Write a program that asks the user if they want to add more sugar to their tea. Keep asking until they respond with "enough." Use a do-while loop for this.

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string response;

//     do {
//         cout << "Do you want to add more sugar to your tea? ";
//         getline(cin, response);
//     } while (response != "enough");

//     cout << "Alright, your tea is sweet enough now!\n";

//     return 0;
// }


// Challenge 3: For Loop
// Create a program that prints the first 10 multiples of 2, representing the total tea bags required for making batches of tea.

// #include <iostream>

// using namespace std;

// int main() {
//     int multi =10;
//     for (int i = 1; i <= multi; i++)
//     {
//         cout<< "2 x "<<i<<" = "<<2*i<<endl;
//     }
    
//     return 0;
// }

//littel more advanced

#include <iostream>

using namespace std;

int main() {
    int multi =10,tableof;
    cout << "Which numbers table do you want to write : ";
    cin >> tableof;
    for (int i = 1; i <= multi; i++)
    {
        cout<<tableof <<" x "<<i<<" = "<<tableof*i<<endl;
    }
    
    return 0;
}

// Challenge 4: Break and Continue
// Write a program that checks a list of tea types and serves tea for each type, except "Herbal Tea." If "Herbal Tea" is encountered, skip it using continue. 
//If "No Tea" is encountered, stop the loop using break.

// Challenge 5: Nested Loops
// Write a program that displays a tea brewing schedule. For each day of the week (outer loop), brew 2 cups of tea for breakfast, lunch, and dinner (inner loop).
