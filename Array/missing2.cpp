#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missingNumber(vector<int>& arr) {
    
    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != i){
            return i;
        }
    }

    return arr.size();
}

int missingNumber2(vector<int>& arr){
    int xor1 = 0, xor2 = 0;

// XOR from 1 to n
for(int i = 1; i <= arr.size(); i++) 
    xor1 ^= i;


// XOR array
for(int i = 0; i < arr.size()-1; i++) 
    xor2 ^= arr[i];


return xor1 ^ xor2;
}
int main() {

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> arr(n-1);

    cout << "Enter " << n-1 << " numbers (from 0 to " << n-1 << "): ";

    for(int i = 0; i < n-1; i++){
        cin >> arr[i];
    }

    // int missing = missingNumber(arr);

    // cout << "Missing number is: " << missing << endl;

    int missing2 = missingNumber2(arr);
    cout << "Missing number is: " << missing2 << endl;

    return 0;
}