                                               // Agar array me third largest element nikaalna ho to kaise karoge efficiently?
#include<iostream>
#include<climits>
using namespace std;

// void thirdLargest(int arr[], int n){
//     int largest = INT_MIN;
//     int secondLargest = INT_MIN;
//     int thirdLargest = INT_MIN;

//     for(int i=0; i<n; i++){
//         if(arr[i] > largest){
//             thirdLargest = secondLargest;
//             secondLargest = largest;
//             largest = arr[i];
//         }
//         else if(arr[i] > secondLargest && arr[i] != largest){
//             thirdLargest = secondLargest;
//             secondLargest = arr[i];
//         }
//         else if(arr[i] > thirdLargest && arr[i] != secondLargest && arr[i] != largest){
//             thirdLargest = arr[i];
//         }
//     }

//     if(thirdLargest == INT_MIN){
//         cout<<"There is no third largest element in the array."<<endl;
//     }
//     else{
//         cout<<"The third largest element in the array is: "<<thirdLargest<<endl;
//     }
// }


void thirdLargest(int arr[], int n){

    if(n < 3){
        cout<<"Array must have at least 3 elements."<<endl;
        return;
    }

    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;

    for(int i = 0; i < n; i++){

        if(arr[i] > first){
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] < first && arr[i] > second){
            third = second;
            second = arr[i];
        }
        else if(arr[i] < second && arr[i] > third){
            third = arr[i];
        }
    }

    if(third == INT_MIN){
        cout<<"There is no third largest distinct element."<<endl;
    }
    else{
        cout<<"Third largest element is: "<<third<<endl;
    }
}


int main(){

    int arr[] = {14,21,4,33,10};
    int size = 5;

    thirdLargest(arr, size);

    return 0;
}

