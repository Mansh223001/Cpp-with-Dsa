#include <iostream>
using namespace std;

int main() {

    long long num, original, rev = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Negative numbers are not palindrome";
        return 0;
    }

    original = num;

    while (num != 0) {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num = num / 10;
    }

    if (original == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}