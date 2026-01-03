#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int rollNo;
    float marks;
public:
    Student(string n) {
        name = n;
        rollNo = 30;
        marks = 50;
        cout << "Constructor with Name called." << endl;
    }
    Student(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
        cout << "Constructor with Name, Roll No, and Marks called." << endl;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl << endl;
    }
    ~Student() {
        cout << "Destructor called for student: " << name << endl;
    }
};
int main() {
    Student s2("Rida");
    s2.display();
    Student s3("Zain", 30, 88.5);
    s3.display();
    cout<<"Rida Shehzad"<<endl;
    cout<<"030"<<endl;
    return 0;
}

