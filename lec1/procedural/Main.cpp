#include <iostream>
#include <string>
#include <list>


using namespace std;


 void toString(string name , string faculty , int course) {

    cout<< name + " " + faculty +" "+ to_string(course) << endl;
}

int main() {
     string schoolName = "Hogwarts";

    string name = "John";
    string faculty = "G";
    int course = 1;

    string name1 = "Joane";
    string faculty1 = "S";
    int course1 = 1;


    course++;
    course1++;

    toString(name, faculty, course);
    toString(name1, faculty1, course1);

    return 0;
}
