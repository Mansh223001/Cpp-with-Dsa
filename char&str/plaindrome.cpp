#include<iostream>
using namespace std;

int getLength(char arr[], int size) {
    int i = 0;
    while (i < size && arr[i] != '\0') ++i;
    return i;
}

bool isPalindrome(char arr[], int size) {
    int len = getLength(arr, size);
    int start = 0;
    int end = len - 1;
    while (start < end) {
        if (arr[start] == arr[end]) {
            start++;
            end--;
        } else {
            return false;
        }
        
    }
    return true;
}

int main() {
    char arr[1000];
    cout << "Enter a string: ";
    
    cin >> arr;
    // int size = 0;
  
    if (isPalindrome(arr, 1000)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}