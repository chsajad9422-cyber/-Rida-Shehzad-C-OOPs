#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y) 
{ 
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;
    CursorPosition.X = x; 
    CursorPosition.Y = y; 
    SetConsoleCursorPosition(console, CursorPosition); 
}

int main() {
    int i, j;

    // =========================
    // PRINT: R I D A   S H E H Z A D
    // =========================
    for (i = 0; i < 7; i++) {
        // R
        for (j = 0; j < 5; j++) {
            if (j == 0 || (i == 0 && j < 4) || (i == 3 && j < 4) ||
                (j == 4 && i > 0 && i < 3) || (i - j == 2 && i > 3))
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // I
        for (j = 0; j < 7; j++) {
            if (i == 0 || i == 6 || j == 3)
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // D
        for (j = 0; j < 6; j++) {
            if (j == 0 || (i == 0 && j < 5) || (i == 6 && j < 5) ||
                (j == 5 && i > 0 && i < 6))
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // A
        for (j = 0; j < 7; j++) {
            if ((j == 0 || j == 6) && i != 0 || (i == 0 || i == 3) && j > 0 && j < 6)
                cout << "*";
            else
                cout << " ";
        }
        cout << "     ";

        // S
        for (j = 0; j < 6; j++) {
            if ((i == 0 && j > 0) || (i == 3 && j > 0 && j < 5) || (i == 6 && j < 5) ||
                (j == 0 && i > 0 && i < 3) || (j == 5 && i > 3 && i < 6))
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // H
        for (j = 0; j < 6; j++) {
            if (j == 0 || j == 5 || i == 3)
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // E
        for (j = 0; j < 6; j++) {
            if (j == 0 || i == 0 || i == 3 || i == 6)
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // H
        for (j = 0; j < 6; j++) {
            if (j == 0 || j == 5 || i == 3)
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // Z
        for (j = 0; j < 7; j++) {
            if (i == 0 || i == 6 || i + j == 6)
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // A
        for (j = 0; j < 7; j++) {
            if ((j == 0 || j == 6) && i != 0 || (i == 0 || i == 3) && j > 0 && j < 6)
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // D
        for (j = 0; j < 6; j++) {
            if (j == 0 || (i == 0 && j < 5) || (i == 6 && j < 5) ||
                (j == 5 && i > 0 && i < 6))
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
        Sleep(100);
    }

    // ================
    // SPACE AFTER NAME
    // ================
    cout << "\n\n\n"; // Adds 3 empty lines for separation

    // =========================
    // PRINT: FOUNDATION UNIVERSITY
    // =========================
    // First word: FOUNDATION
    for (i = 0; i < 7; i++) {
        // F
        for (j = 0; j < 6; j++) {
            if (j == 0 || i == 0 || i == 3)
                cout << "*";
            else
                cout << " ";
        }
        cout << "   "; 

        // O
        for (j = 0; j < 6; j++) {
            if ((i == 0 || i == 6) && j > 0 && j < 5 || (j == 0 || j == 5) && i > 0 && i < 6)
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // U
        for (j = 0; j < 6; j++) {
            if ((j == 0 || j == 5) && i < 6 || (i == 6 && j > 0 && j < 5))
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // N
        for (j = 0; j < 6; j++) {
            if (j == 0 || j == 5 || i == j)
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // D
        for (j = 0; j < 6; j++) {
            if (j == 0 || (i == 0 && j < 5) || (i == 6 && j < 5) || (j == 5 && i > 0 && i < 6))
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // A
        for (j = 0; j < 7; j++) {
            if ((j == 0 || j == 6) && i != 0 || (i == 0 || i == 3) && j > 0 && j < 6)
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // T
        for (j = 0; j < 7; j++) {
            if (i == 0 || j == 3)
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // I
        for (j = 0; j < 7; j++) {
            if (i == 0 || i == 6 || j == 3)
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // O
        for (j = 0; j < 6; j++) {
            if ((i == 0 || i == 6) && j > 0 && j < 5 || (j == 0 || j == 5) && i > 0 && i < 6)
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // N
        for (j = 0; j < 6; j++) {
            if (j == 0 || j == 5 || i == j)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
        Sleep(200);
    }

    cout << "\n\n"; // gap between words

    // Second word: UNIVERSITY
    for (i = 0; i < 7; i++) {
        // U
        for (j = 0; j < 6; j++) {
            if ((j == 0 || j == 5) && i < 6 || (i == 6 && j > 0 && j < 5))
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // N
        for (j = 0; j < 6; j++) {
            if (j == 0 || j == 5 || i == j)
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // I
        for (j = 0; j < 7; j++) {
            if (i == 0 || i == 6 || j == 3)
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // V
        for (j = 0; j < 7; j++) {
            if ((j == i && i < 4) || (j == 6 - i && i < 4) || (i >= 4 && j == 3))
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // E
        for (j = 0; j < 6; j++) {
            if (j == 0 || i == 0 || i == 3 || i == 6)
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // R
        for (j = 0; j < 5; j++) {
            if (j == 0 || (i == 0 && j < 4) || (i == 3 && j < 4) ||
                (j == 4 && i > 0 && i < 3) || (i - j == 2 && i > 3))
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // S
        for (j = 0; j < 6; j++) {
            if ((i == 0 && j > 0) || (i == 3 && j > 0 && j < 5) || (i == 6 && j < 5) ||
                (j == 0 && i > 0 && i < 3) || (j == 5 && i > 3 && i < 6))
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // I
        for (j = 0; j < 7; j++) {
            if (i == 0 || i == 6 || j == 3)
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // T
        for (j = 0; j < 7; j++) {
            if (i == 0 || j == 3)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
        Sleep(100);
    }

    return 0;
}





