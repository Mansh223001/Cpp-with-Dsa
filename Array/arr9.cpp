                                                        // Write a C++ program to find the second largest element in an array of integers.

#include<iostream>
// #include<climits>
using namespace std;

// void secondLargest(int arr[], int n){
//     int largest = INT_MIN;
//     int secondLargest = INT_MIN;

//     for(int i=0; i<n; i++){
//         if(arr[i] > largest){
//             secondLargest = largest;
//             largest = arr[i];
//         }
//         else if(arr[i] > secondLargest && arr[i] != largest){
//             secondLargest = arr[i];
//         }
//     }

//     if(secondLargest == INT_MIN){
//         cout<<"There is no second largest element in the array."<<endl;
//     }
//     else{
//         cout<<"The second largest element in the array is: "<<secondLargest<<endl;
//     }
// }

void secondLargest(int arr[], int n){
    int largest = arr[0];
    int secondLargest = -1;

    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }

    if(secondLargest == -1){
        cout<<"There is no second largest element in the array."<<endl;
    }
    else{
        cout<<"The second largest element in the array is: "<<secondLargest<<endl;
    }
}

   

int main(){

    int arr[] = {14,21,4,33,10};
    int size = 5;

    secondLargest(arr, size);

    return 0;
}