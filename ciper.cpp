#include <iostream>
using namespace std;
int main() {
    string text;
    int key = 3; 
    cout << "Enter message: ";
    getline(cin, text);

    for (int i = 0; i < text.length(); i++) {
        if (isalpha(text[i])) {
            text[i] = text[i] + key;
        }
    }
    cout << "Encrypted message: " << text << endl;
    return 0;
}

