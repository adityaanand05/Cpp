//  Q1. Basic Eligibility Checker
// Problem:
// You’re designing a system to check if a person is eligible to vote.

// Inputs:

// int age

// bool isCitizen

// Condition:

// Must be 18 or older and a citizen to vote.

// Task:
// Write code that prints:

// "Eligible" if conditions are met

// "Not eligible" otherwise

// Focus: &&, >=, if-else

#include <iostream>

using namespace std;

int main() {
    int age;
    bool iscitizen;

    cout << "Enter Your age : ";
    cin >> age;

    cout << "Are you citizen (1 for yes, 0 for no) : ";
    cin >> iscitizen;

    if(age >= 18 && iscitizen ){
        cout << "Eligible, You can give Vote.";
    }else{
        cout << "Not eligible, You can't give Vote.";
    }
    return 0;
}
