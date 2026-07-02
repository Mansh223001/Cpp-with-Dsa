#include <iostream>
using namespace std;

// void moveAllNegatives(int arr[], int n) {
//     int j = 0; // Pointer for the position of the next negative number

//     for (int i = 0; i < n; i++) {
//         if (arr[i] < 0) {
//             swap(arr[i], arr[j]); // Move the negative number to the front
//             j++; // Increment the pointer for the next negative number
//         }
//     }
// }

void moveallneg(int arr[], int n){
    int i=0, j=n-1;
    while(i<j){
        if(arr[i]<0)
            i++;
        else if(arr[j]>=0)
            j--;
        else
            swap(arr[i], arr[j]);
    }
}

int main()
{
    int a[]={1,-2,3,4,-5,6};
    int n=6;

    // moveAllNegatives(a,n);
    moveallneg(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
