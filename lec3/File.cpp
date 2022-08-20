//
// Created by Denys Prokhorin on 20.08.2022.
//

#include <string>
#include <list>
#include <iostream>
#include <fstream>


using namespace std;

class Student {
private:
    //state
    string name;
    string house;
    int course;
public:
    Student() {
        this->name = "";
        this->house = "";
        this->course = 1;
    }

    Student(string name, string surname, int course) {
        this->name = name;
        this->house = surname;
        this->course = course;
    }

    //beh
    void incrementYear() {
        this->course++;
    }

    int getCourse() {
        return course;
    }

    string getName() {
        return name;
    }

    string getHouse() {
        return house;
    }

    string toString() {
        return name.append(" ").append(house).append(" ").append(to_string(course));
    }

    /*
 * Write the member variables to stream objects
 */
    friend ostream &operator<<(ostream &out, const Student &obj) {
        out << obj.course << "\n" << obj.name << "\n" << obj.house << endl;
        return out;
    }


    friend std::istream &operator>>(std::istream &in, Student &obj) {
        in >> obj.course;
        in >> obj.name;
        in >> obj.house;
        return in;
    }
};

int main() {

    Student stud1("Jack", "S", 1);
    Student stud2("Jane", "G", 2);

    // Open the File
    ofstream out("students.txt");


    // Write objects to file
    out << stud1;
    out << stud2;

    out.close();

    ifstream in("students.txt");

    while (!in.eof()) {
        Student student;
        in >> student;
        if (in.eof()) break;
        cout << student.toString() << endl;

    }
    in.close();


    return 0;
}
