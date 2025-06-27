#include<iostream>
#include <string>
using namespace std;
//normal function 
int sum(int a, int b){
    int add;
    add = a+b;
    cout << "Sum = " << add;
    return add;
}
//recursion
int factorial(int n) {
    if (n <= 1) return 1;            // Base case
    return n * factorial(n - 1);     // Recursive case
}



// Function overloading
void car(int);
void car(string);

int main(){
    // int i,j;
    // cout << "Enter Your first number :";
    // cin>>i;
    // cout << "Enter Your second number :";
    // cin>>j;

    // sum(i,j);
    // car();


// This a lambda a fuction made and called for specific(once called or not needed to call many times) code 
    auto tea = [](int ){
        int lovefortea;
        cout << "How much do you love tea (tell in %): ";
        cin >> lovefortea;
        if (lovefortea<80)
        {
            cout << "Dam man you don't like tea.";
        }else{
            cout << "Me too bro";
        }
        

    };
    tea(81);



    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // cout << "Factorial of " << num << " is " << factorial(num) << endl;
    // return 0;
}

// Function overloading - When two function is named with same name.

void car(int){
    int totalcar; // this allow user to take input in function
    cout << "Enter total numbedr of cars :";
    cin >> totalcar;
    cout << "Total cars =" << totalcar;
}

void car(string){
    string carname;
    cout << "Enter name of car : ";
    getline(cin, carname);
    cout << "You chossed "<<carname;

}