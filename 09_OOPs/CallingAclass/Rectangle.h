#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
    float length, breadth;
    int option;

    float area();
    float perimeter();

    void run(); // method to handle the full interaction loop
};


#endif
