//
// Created by Denys Prokhorin on 03.10.2022.
//

class SuperClass {
public:
    int foo;

    SuperClass(int foo) {
        this->foo = foo;/**/
    }
};

class SubClass : public SuperClass {
public:
    int bar;


    SubClass(int foo, int bar)
            : SuperClass(foo)    // Call the superclass constructor in the subclass' initialization list.
    {
        this->bar=bar;
        // do something with bar
    }
};

int main() {


}