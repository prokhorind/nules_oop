//
// Created by Denys Prokhorin on 20.08.2022.
//

#include <iostream>

using namespace std;

class Box {
    double width;

public:
    friend void printWidth(Box box);

    void setWidth(double wid);
};

// Member function definition
void Box::setWidth(double wid) {
    width = wid;
}

// Note: printWidth() is not a member function of any class.
void printWidth(Box box) {
    cout << "Width of box : " << box.width << endl;
}

// Main function for the program
int main() {
    Box box;

    // set box width without member function
    box.setWidth(10.0);

    // Use friend function to print the width.
    printWidth(box);

    return 0;
}