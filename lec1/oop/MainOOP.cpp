#include <iostream>
#include <string>
#include <list>


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
        this->course = 0;
    }

    Student(string name, string surname, int course) {
        this->name = name;
        this->house = surname;
        this->course = course;
    }

    void setName(string name) {
        this->name = name;
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
};


int main() {

    list<Student> people;

    Student person("John Smith", "G", 1);

    Student person2("Jane Smith", "S", 2);


    people.push_front(person);
    people.push_front(person2);


    for (Student p: people) {
        std::cout << p.toString() << '\n';
    }

    for (Student p: people) {
        p.incrementYear();
        std::cout << p.getCourse() << '\n';
    }

    return 0;
}