                         // Remove Duplicates from Sorted Array
#include<iostream>
using namespace std;

// int removeDuplicates(int arr[], int n){
//     if(n == 0 || n == 1){
//         return n;
//     }

//     int j = 0; // Index of the next unique element

//     for(int i = 1; i < n; i++){
//         if(arr[i] != arr[j]){
//             j++;
//             arr[j] = arr[i]; // Move the unique element to the next position
//         }
//     }

//     return j + 1; // Return the new length of the array with unique elements
// }

int removeDulicates1(int arr[], int n){
    // int i=0;

    // for(int j=1; j<n; j++){
    //     if(arr[i] != arr[j]){
    //         i++;
    //         arr[i] = arr[j];
    //     }
    // }

    // return i + 1;
    int i = 0 , j = 0;
    while(i<n){
            if(arr[i]==arr[j])
               i++;
            else{
                j++;
                arr[j]=arr[i];
                i++;
            }   
        }
        return j+1;

}

int main(){
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // int newLength = removeDuplicates(arr, n);

    int newLength = removeDulicates1(arr, n);

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < newLength; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}