#include <iostream>
#include "Rectangle.h"
using namespace std;

// Rectangle method definitions
float Rectangle::area() {
    return length * breadth;
}

float Rectangle::perimeter() {
    return 2 * (length + breadth);
}

// RectangleApp method definition
void Rectangle::run() {
    char choice;

    do {
        Rectangle r1;

        cout << "Enter your length: ";
        cin >> r1.length;
        cout << "Enter your breadth: ";
        cin >> r1.breadth;

        cout << "\nWhat do you want to find?" << endl;
        cout << "Enter (1) for Area and Perimeter both" << endl;
        cout << "Enter (2) for Area only" << endl;
        cout << "Enter (3) for Perimeter only" << endl;
        cout << "Your answer: ";
        cin >> r1.option;

        switch (r1.option) {
            case 1:
                cout << "Area: " << r1.area() << endl;
                cout << "Perimeter: " << r1.perimeter() << endl;
                break;
            case 2:
                cout << "Area: " << r1.area() << endl;
                break;
            case 3:
                cout << "Perimeter: " << r1.perimeter() << endl;
                break;
            default:
                cout << "Invalid option!" << endl;
        }

        cout << "\nDo you want to calculate again? (y/n): ";
        cin >> choice;
        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you!" << endl;
}
