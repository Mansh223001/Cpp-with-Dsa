    // Remove all adjacent duplicates in string
#include<iostream>
using namespace std;

void removeAdjacentDuplicates(char arr[], int size) {
    int j = 0; // Index of the next position to place a non-duplicate character
    for (int i = 0; i < size; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            arr[j++] = arr[i]; // Place the non-duplicate character at index j and increment j
        }
    }
    arr[j] = '\0'; // Null-terminate the modified string
}

int main() {
    char arr[1000];
    cout << "Enter a string: ";
    
    cin >> arr;
    int size = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        size++;
    }
    removeAdjacentDuplicates(arr, size);
    cout << "String after removing adjacent duplicates: " << arr << endl;

    return 0;
}