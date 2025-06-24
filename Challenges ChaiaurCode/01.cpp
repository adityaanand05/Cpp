// Challenges

// Challenge 1:
// Tea Information Display Write a program that declares variables to store the type of tea, its price per kilogram (float), and its rating (char). 
// Use data types effectively and print them in a formatted output using escape sequences.
// Hint: Use \n for new lines and " to quote the tea name.

#include <iostream>
#include<string>
using namespace std;

int main() {
   
    string teaType;
    float pricePerKg;
    char rating;

    
    cout << "Enter the type of tea: ";
    getline(cin, teaType);

    cout << "Enter the price per kilogram: ";
    cin >> pricePerKg;

    cout << "Enter the rating (A/B/C): ";
    cin >> rating;

    
    cout << "\n\t--- Tea Details ---\n";
    cout << "\tType of Tea     : " << teaType << "\n";
    cout << "\tPrice per Kg    : $" << pricePerKg << "\n";
    cout << "\tRating          : " << rating << "\n";

    return 0;
}


// Challenge 2:
// Modify Tea Prices Create a program where the user inputs a base price for tea.
// Use type casting to increase the price by 10% and display the rounded new price using explicit casting.
// Hint: Use both float and int types, and demonstrate type casting.

#include <iostream>

using namespace std;

int main() {
    int baseprice;
    cout << "Enter Base Tea Price : ";
    cin>> baseprice;
    float Finalprice = baseprice+(float)baseprice * 0.1 ;
    cout<< "Your Final Price is "<< Finalprice;
    return 0;
}


// Challenge 3:
// Favorite Tea Input Write a program that takes the user’s favorite tea as input using getline and also asks how many cups of tea they want using cin.
// Display the result in a fun message.
// Hint: Combine cin and getline carefully to avoid input issues.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string Favorite_Tea;
    int CupsofTea;
    cout << "Enter your favorite tea : ";
    getline(cin,Favorite_Tea);
    cout << "Enter number of cups of tea :  ";
    cin>> CupsofTea;
    if (Favorite_Tea=="Green Tea"||Favorite_Tea=="green tea")
    {
        cout << "\t\t"<< Favorite_Tea << "! Nice Choice \n";
        cout << "\tTried to drink herbal tea to calm down.\n\tNow I'm just a relaxed psycho.\n\tNamaste and watch your back. \n";
    }else if (CupsofTea>10)
    {
        cout << "\t\t"<< Favorite_Tea << "! Nice Choice \n";
        cout << "\tFu*k Bro Don't drink too much tea in a day . \n\tYou can die..... ";
    }else{
        cout <<"\t\t"<< Favorite_Tea << "! Nice Choice \n";
        cout << "\tAre you tea? \n\tBecause you've got me feeling all warm, steamy, and slightly obsessed. ";
    }
    
    
    return 0;
}