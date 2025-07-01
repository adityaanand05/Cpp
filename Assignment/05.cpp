// 1. If Statement

// Challenge: Write a program that checks if the user wants to order Green Tea. If the user types "Green Tea," the program should confirm their order.


#include <iostream>
#include <string>
using namespace std;

int main() {
    string teaOrder ;
    cout << "Give me your order : ";
    getline(cin,teaOrder);
    if (teaOrder == "Green Tea"||teaOrder == "green tea"||teaOrder == "Green tea"||teaOrder == "green Tea"|| teaOrder == "GreenTea"||teaOrder == "Greentea")
    {
        cout << "You have ordered Green Tea" << endl;
        
    }
    
    return 0;
}

// 2. If-Else Statement

// Challenge: Write a program that checks if a tea shop is open. 
//If the current hour (input by the user) is between 8 AM and 6 PM, the shop is open; otherwise, it's closed.

#include <iostream>

using namespace std;

int main() {
    int time , AmorPm;
    cout << "Enter current Time (in 24 hr clock) : ";
    cin >> time;
    if (time >= 8 && time <= 18)
    {
        cout << "Welcome the Shop is open" << endl;
        
    }
    else{
        cout << "Sorry the Shop is closed" << endl;
        
    }
    return 0;
}

// 3. Nested If-Else

// Challenge: A tea shop offers discounts based on the number of tea cups ordered. 
//Write a program that checks the number of cups ordered and applies a discount: More than 20 cups: 20% discount

// Between 10 and 20 cups: 10% discount

// Less than 10 cups: No discount

// #include <iostream>

// using namespace std;

// int main() {
//     int numcups;
//     cout << "Enter the number of cups : ";
//     cin >> numcups;

//     if (numcups>20)
//     {
//         cout << "Congratulation! You got 20\% discount";
//     }
//     else if (numcups<=20&&numcups>=10)
//     {
//         cout << "Congratulation! You got 10\% discount";
//     }
//     else
//     {
//         cout << "Sorry! No discount";
//     }
//     return 0;
// }
#include <iostream>



using namespace std;

int main() {
     int numcups;
    float discount, totalprice;
    float pricepercup = 10.5;
    cout << "Enter the number of cups : ";
    cin >> numcups;
    
    totalprice = numcups * pricepercup;
    if (numcups>20)
    {
        discount = 0.20;
        cout << "Congratulation! You got 20% discount";
    }
    else if (numcups<=20&&numcups>=10)
    {
        discount = 0.10;
        cout << "Congratulation! You got 10% discount";
    }
    else
    {
        discount = 0;
        cout << "Sorry! No discount";
    }
    totalprice -= (totalprice*discount);
    cout << "\nTotal price: " << totalprice << endl;
    return 0;
}



// 4. Switch Case

// Challenge: Write a program that lets the user select a tea type from a menu. 
//Use a switch statement to display the price based on the selected tea:* Green Tea: $2

// Black Tea: $3

// Oolong Tea: $4

#include <iostream>
#include <string>
using namespace std;

int main() {
    int order;
    double price;
    cout << "Enter your tea order(from - 1 for Green Tea , 2 for Black Tea or 3 for Oolong Tea) : ";
    cin>>order;
    switch (order)
    {
    case 1:
        price = 2.0;
        cout << "You ordered Green Tea. Price = $"<< price;
        break;
    case 2:
        price = 3.0;
        cout << "You ordered Black Tea. Price = $"<< price;
        break;
    case 3:
        price = 4.0;
        cout << "You ordered Oolong Tea. Price = $"<< price;
        break;
    
    default:
        cout << "Sorry that tea not avalible";
        break;
    }
    return 0;
}

