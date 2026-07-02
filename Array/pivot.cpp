                                                  // C++ program to find pivot element in an array
#include<iostream>
using namespace std;

// int findpivot(int arr[], int n){
//     int s = 0;
//     int e = n-1;

//     while(s<e){
//         int mid = s + (e-s)/2;

//         if(arr[mid] >= arr[0]){
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//     }
//     return s;
// }

int findpivot1(int arr[], int n){
   int totalSum = 0;

    // Step 1: total sum calculate karo
    for(int i = 0; i < n; i++){
        totalSum += arr[i];
    }

    int leftSum = 0;

    // Step 2: pivot check karo
    for(int i = 0; i < n; i++){

        int rightSum = totalSum - leftSum - arr[i];

        if(leftSum == rightSum){
            return i;
        }

        leftSum += arr[i];
    }

    return -1; // pivot nahi mila
}

int main(){
    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    // int pivotindex = findpivot(arr,n);
    int pivotindex = findpivot1(arr,n);
    cout<<"pivot element is:"<<arr[pivotindex]<<endl;

    return 0;
}