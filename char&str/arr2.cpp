#include<iostream>
using namespace std;

void replaceCharacter(char arr[], char originalChar, char newChar, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == originalChar) {
            arr[i] = newChar;
        }
    }
}

int main() {
    char arr[1000];
    cout << "Enter a string: ";
    
    cin>> arr;
    replaceCharacter(arr, '@', ' ', 1000);
    cout << "Modified string: " << arr << endl;

    return 0;
}