                               // Missing Number
#include <iostream>
using namespace std;

int missingNumber(int arr[], int n) {
    int total = (n * (n - 1)) / 2; // Sum of first n natural numbers
    int sum = 0;

    for (int i = 0; i < n - 1; i++) {
        sum += arr[i]; // Sum of elements in the array
    }

    return total - sum; // The missing number is the difference
}

int missingNumberXOR(int arr[], int n) {
    int xorArr = 0;
    int xorTotal = 0;

    for (int i = 0; i < n - 1; i++) 
        xorArr ^= arr[i]; // XOR of elements in the array
    

    for (int i = 0; i < n; i++) 
        xorTotal ^= i; // XOR of first n natural numbers
    

    return xorArr ^ xorTotal; // The missing number is the XOR of the two results
}


int main() {
    int n;
    cout << "Enter the size of the array (n): ";
    cin >> n;
    

    int arr[n - 1]; // Array of size n-1 since one number is missing
    
    cout << "Enter " << n - 1 << " numbers (from 0 to " << n - 1 << "): ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }



    // int missing = missingNumber(arr, n);
    // cout << "The missing number is: " << missing << endl;
   // Convert array to vector for the second method
    int missingXOR = missingNumberXOR(arr, n);
    cout << "The missing number (using XOR) is: " << missingXOR << endl;
    
    return 0;
}