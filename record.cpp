//  **Student Record System**
// Create a `struct Student` with `name (string)`, `marks (int)`, `grade (char)`.
// - Take input for 3 students
// - Auto-assign grade: `>=90→'A'`, `>=75→'B'`, `>=60→'C'`, else `'D'`
// - Print all students with their grade
// ```
// Input:
// Rahul 92
// Priya 76
// Amit 55

// Output:
// Rahul A
// Priya B
// Amit D
// Student Record System'   
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int marks;
    char grade;
};

char assignGrade(int marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 75) return 'B';
    else if (marks >= 60) return 'C';
    else return 'D';
}

int main() {
    Student students[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter name and marks for student " << i + 1 << ": ";
        cin >> students[i].name >> students[i].marks;
        students[i].grade = assignGrade(students[i].marks);
    }

    cout << "\nStudent Records:\n";
    for (int i = 0; i < 3; i++) {
        cout << students[i].name << " " << students[i].grade << endl;
    }

    return 0;
}