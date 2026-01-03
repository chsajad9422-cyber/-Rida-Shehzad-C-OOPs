#include <iostream>
using namespace std;
class Quiz {
    int quizNo;
    int marks;
public:
    Quiz(int q, int m) {
        quizNo = q;
        marks = m;
    }
    void display() {
        cout << "Quiz No: " << quizNo << "  Marks: " << marks << endl;
    }
};
int main() {
    Quiz obj[] = {
        Quiz(1, 10),
        Quiz(2, 15),
        Quiz(3, 20)
    };
    for (int i = 0; i < 3; i++) {
        obj[i].display();
    }
    cout<<"Name: Rida Shehzad"<<endl;
    cout<<"Roll No: 030";
    return 0;
}

