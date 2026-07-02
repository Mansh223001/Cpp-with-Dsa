//      valid palindrome 2
// Given a string s, return true if the s can be palindrome after deleting at most one character from it.
#include<iostream>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            // Try skipping the left character
            bool skipLeft = true;
            for (int i = left + 1, j = right; i < j; i++, j--) {
                if (s[i] != s[j]) {
                    skipLeft = false;
                    break;
                }
            }

            // Try skipping the right character
            bool skipRight = true;
            for (int i = left, j = right - 1; i < j; i++, j--) {
                if (s[i] != s[j]) {
                    skipRight = false;
                    break;
                }
            }

            return skipLeft || skipRight; // Return true if either option works
        }
        left++;
        right--;
    }

    return true; // The string is already a palindrome
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (isPalindrome(s)) {
        cout << "The string can be a palindrome by deleting at most one character." << endl;
    } else {
        cout << "The string cannot be a palindrome even after deleting one character." << endl;
    }

    return 0;
}