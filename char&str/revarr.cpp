#include<iostream>
using namespace std;
void reverseString(char arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        char temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    char arr[1000];
    cout << "Enter a string: ";
    
    cin >> arr;
    int size = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        size++;
    }
    reverseString(arr, size);
    cout << "Reversed string: " << arr << endl;

    return 0;
}