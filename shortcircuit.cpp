#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;
    int c = 15;
    // Short-circuit evaluation
    cout << (a > 3 && b < 15 && c > 20) << endl; // Output: 0 (false) because c > 20 is false
    cout << (a > 3 || b < 15 || c > 20) << endl; // Output: 1 (true) because a > 3 is true
    return 0;
}