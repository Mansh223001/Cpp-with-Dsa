#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter your grade";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "you got > 90%" << endl;
            break;
        case 'B':
            cout << "you got 80-90%" << endl;
            break;
        case 'C':
            cout << "you got 70-80%" << endl;
            break;
        case 'D':
            cout << "you got 60-70%" << endl;
            break;
        case 'F':
            cout << "you got < 60%" << endl;
            break;
        default:
            cout << "Better luck next time!" << endl;
    }
    return 0;
}