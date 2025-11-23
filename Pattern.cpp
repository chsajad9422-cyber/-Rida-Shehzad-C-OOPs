#include <iostream>
using namespace std;
class PatternPrinter {
public:
    void printPattern() {
        for (int row = 7; row >= 1; row--) {
            for (int i = 1; i <= row; i++) {
                cout << i << " ";
            }
            int spaces = (7 - row) * 2;
            for (int s = 1; s <= spaces; s++) {
                cout << "  ";
            } 
            for (int i = row; i >= 1; i--) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    PatternPrinter obj;   // create object
    obj.printPattern();   // call function
    return 0;
}




