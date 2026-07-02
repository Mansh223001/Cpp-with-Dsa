#include<iostream>
using namespace std;

void convertToUpperCase(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        // if (arr[i] >= 'a' && arr[i] <= 'z') {
        //     arr[i] = arr[i] - ('a' - 'A');
        // }
        char ch = arr[i];
        if (ch >= 'a' && ch <= 'z') {
            arr[i] = ch - ('a' - 'A');
        }
    }
}

int main() {
    char arr[1000];
    cout << "Enter a string: ";
    
    cin >> arr;
    convertToUpperCase(arr, 1000);
    cout << "String in uppercase: " << arr << endl;

    return 0;
}