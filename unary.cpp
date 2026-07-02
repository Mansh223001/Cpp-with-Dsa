#include <iostream>
using namespace std;

int main() {
    int a = 5;
    cout << "Value of a: " << a << endl; // Output: 5
    cout << "Value of a++: " << a++ << endl; // Output: 5 (post-increment)
    cout << "Value of a after a++: " << a << endl; // Output: 6
    cout << "Value of ++a: " << ++a << endl; // Output: 7 (pre-increment)
    cout << "Value of a--: " << a-- << endl; // Output: 7 (post-decrement)
    cout << "Value of a after a--: " << a << endl; // Output: 6
    cout << "Value of --a: " << --a << endl; // Output: 5 (pre-decrement)
    return 0;
}