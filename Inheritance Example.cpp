#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    void setPerson() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }
    void showPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
class Student : public Person {
protected:
    int rollNo;
    string grade;
public:
    void setStudent() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Grade: ";
        cin >> grade; // Only first word
    }
    void showStudent() {
        cout << "Roll No: " << rollNo << ", Grade: " << grade << endl;
    }
};
class Exam : public Student {
private:
    int mathMarks;
    int physicsMarks;
    int chemistryMarks;
public:
    void setMarks() {
        cout << "Enter Math Marks: ";
        cin >> mathMarks;
        cout << "Enter Physics Marks: ";
        cin >> physicsMarks;
        cout << "Enter Chemistry Marks: ";
        cin >> chemistryMarks;
    }
    void showMarks() {
        cout << "Marks - Math: " << mathMarks
             << ", Physics: " << physicsMarks
             << ", Chemistry: " << chemistryMarks << endl;
        cout << "Total Marks: " << (mathMarks + physicsMarks + chemistryMarks) << endl;
    }
};
int main() {
    Exam e;
    e.setPerson();
    e.setStudent();
    e.setMarks();
    cout << "\nStudent Information:\n";
    e.showPerson();
    e.showStudent();
    e.showMarks();

    return 0;
}



