// Q3. Even or Odd Bitwise Style
// Problem:
// You’re writing firmware for a microcontroller. You need to determine if a number is even or odd using bitwise operators only.

// Input:

// int num

// Condition:
// Use & 1 to check the least significant bit.

// Output:

// "Even" or "Odd"

// Focus: &, %, if-else

#include <iostream>
#include <string>

using namespace std;

int main() {
  int number1 ;
  cout << "Enter Your Number : ";
  cin >> number1;
  if ((number1 & 1) == 0) {
    std::cout << "The number " << number1 << " is Even" << std::endl;
  } else {
    std::cout << "The number " << number1 << " is Odd" << std::endl;
  }

  int number2;
  cout << "Enter Your Number : ";
  cin >> number2;
  if ((number2 & 1) == 0) {
    std::cout << "The number " << number2 << " is Even" << std::endl;
  } else {
    std::cout << "The number " << number2 << " is Odd" << std::endl;
  }

  return 0;
}