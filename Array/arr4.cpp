#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;    


// int findmax(int arr[], int size){ // this is a function to find the maximum element in the array
//     int max = arr[0]; // this will store the maximum element of the array, it is initialized with the first element of the array
//     for(int i=1; i<size; i++){ // this will loop through the array starting from the second element
//         if(arr[i] > max) // this will check if the current element is greater than the maximum element
//             max = arr[i]; // this will update the maximum element if the current element is greater than the maximum element
        
//     }
//     return max; // this will return the maximum element of the array
// }

int findmax1(int arr[], int size){
    int maxAns = INT_MIN; // this will store the maximum element of the array, it is initialized with the minimum integer value
    for(int i=0; i<size; i++){
        maxAns = max(maxAns, arr[i]); // this will update the maximum element if the current element is greater than the maximum element
    }
    return maxAns;
}
int main(){
int a[100];
int size;
cout<<"Enter the size of the array: "<<endl;
cin>>size;
cout<<"Enter the elements of the array: "<<endl;
for(int i=0; i<size; i++){
    cin>>a[i];
}
// int max = findmax(a, size);
// cout<<"Maximum element in the array is: "<<max<<endl;

int max1 = findmax1(a, size);
cout<<"Maximum element in the array is: "<<max1<<endl;

return 0;
}