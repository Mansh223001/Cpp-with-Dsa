                                // sort zeros & ones in an array
#include<iostream>
#include<climits>
using namespace std;

void sortZeroesAndOnes(int arr[], int n){
    int left = 0;
    int right = n - 1;

    while(left < right){
        while(arr[left] == 0 && left < right){
            left++;
        }
        while(arr[right] == 1 && left < right){
            right--;
        }
        if(left < right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

void zeroOne(int arr[], int n){
    int countZeroes = 0;
    int countOnes = 0;

    // Storing the count of zeroes and ones in the array
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            countZeroes++;
        }
        else{
            countOnes++;
        }
    }

    // Updating the array with sorted zeroes and ones
    // int i=0;
    // for(i=0; i<countZeroes; i++){
    //     arr[i] = 0;
    // }
    // for(i=countZeroes; i<n; i++){
    //     arr[i] = 1;
    // }

    fill(arr, arr + countZeroes, 0);
    fill(arr + countZeroes, arr + n, 1);
}

int main(){
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    // sortZeroesAndOnes(arr, n);
    zeroOne(arr, n);
    cout<<"Sorted array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

        

    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    return 0;
}