//
// Created by Denys Prokhorin on 20.10.2022.
//
#include <iostream>


using namespace std;

class Rectangle {
private:
    int a;
    int b;
public:

    void setA(int a) {
        this->a = a;
    }


    int getB() {

        return b;
    }

    Rectangle() {
        this->a = 0;
        this->b = 0;
    }

    Rectangle(int a, int b) {
        this->a = a;
        this->b = b;
    }

    int square() {
        return a * b;
    }

};


int main() {

    Rectangle rectangle(1, 2);


    cout << rectangle.getB() << endl;

    rectangle.setA(4);

    cout << rectangle.square() << endl;


    return 0;
}
