// Challenges for Students

// Challenge 1: Arithmetic Operators
// Write a program that calculates the price of tea packs. 
//A user enters the number of tea packs they want, and the price per pack. Apply a 10% tax to the total price and display the final cost.

/*
#include <iostream>

using namespace std;

int main() {
    int costprice_perpacket = 45 , number_of_packets , finalprice , totalprice; 
    cout<<"Enter the number of packets : ";
    cin >> number_of_packets;
    totalprice = costprice_perpacket * number_of_packets;
    finalprice = totalprice + totalprice*0.1;
    cout << "Your final price with tax :" << finalprice;
    return 0;
}*/


#include <iostream>

using namespace std;

int main() {
    int costprice_perpacket  , number_of_packets , finalprice , totalprice; 
    cout<<"Enter the cost of packets : ";
    cin >> costprice_perpacket;
    cout<<"Enter the number of packets : ";
    cin >> number_of_packets;
    totalprice = costprice_perpacket * number_of_packets;
    finalprice = totalprice + totalprice*0.1;
    cout << "Your final price with tax :" << finalprice;
    return 0;
}

// Challenge 2: Assignment Operators
// Create a program where the user inputs the number of tea bags they have. 
//If the number is less than 20, give them 10 extra bags using the += assignment operator. Display the updated total.


#include <iostream>

using namespace std;

int main() {
    int no_of_teabags;
    cout << "Enter your numbers of tea bags : ";
    cin>> no_of_teabags;
    if (no_of_teabags<20)
    {
        no_of_teabags += 10; 
        cout << "hay, buddy you got 10 extra bags as you have bags less then 20. \n";
        cout << "Now you have " << no_of_teabags<<" bags";
    }
    else
    {
            
        cout << "you have " << no_of_teabags<<" bags";
    }
    
    return 0;
}

// Challenge 3: Relational and Logical Operators
// A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year. 
//Write a program that checks if the user qualifies for a discount based on their input.


#include <iostream>

using namespace std;

int main() {
    int num_cups, memberfromyear;
    cout << "Enter the number of cups you want to buy :";
    cin >> num_cups;
    cout << "You are our member from how many years :";
    cin >> memberfromyear;

    if (num_cups>=12||memberfromyear>1)
    {
        cout << "You are eligible for discount";
    }else{
        cout << "sorry not eligible for discount";
    }
    
    return 0;
}


// Challenge 4: Bitwise Operators
// Write a program that uses bitwise AND (&) to check which tea types are in stock. The stock is encoded in an integer (1 for Green, 2 for Black, 4 for Oolong). 
//Allow the user to check availability by inputting the tea type (1, 2, or 4), and display a message saying whether that tea is in stock or not.

// Chatgpt
#include <iostream>
using namespace std;

int main() {
    // Bit flags: 1 = Green, 2 = Black, 4 = Oolong
    int teaStock = 5;  // For example: Green + Oolong (1 + 4)

    cout << "Available Tea Types:\n";
    cout << "1 - Green Tea\n";
    cout << "2 - Black Tea\n";
    cout << "4 - Oolong Tea\n";
    cout << "Enter a number to check if the tea is in stock: ";

    int choice;
    cin >> choice;

    // Check if input is a valid single tea type
    if (choice != 1 && choice != 2 && choice != 4) {
        cout << "Invalid input! Please enter 1 (Green), 2 (Black), or 4 (Oolong)." << endl;
        return 1;
    }

    // Use bitwise AND to check if that bit is set in stock
    if ((teaStock & choice) != 0) {
        cout << "Yes! That tea is in stock. ☕" << endl;
    } else {
        cout << "Sorry, that tea is out of stock. 🍂" << endl;
    }

    return 0;
}
