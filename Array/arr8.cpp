#include<iostream>
using namespace std;

// void reverse(int arr[], int n){
//     int s = 0;
//     int e = n-1;

//     while(s<e){
//         swap(arr[s], arr[e]);
//         s++;
//         e--;

//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<endl;
//     }
// }

// void reverse1(int arr[], int n){
//     for(int i=0; i<n/2; i++){
//         int temp = arr[i];
//         arr[i] = arr[n-1-i];
//         arr[n-1-i] = temp;
//     }
    
 // for(int i= 0; i<n; i++){
 //     cout<<arr[i]<<endl;
 // }

// }

void reverseXOR(int arr[], int n){
    int s = 0;
    int e = n - 1;

    while(s < e){

        // XOR Swap
        arr[s] = arr[s] ^ arr[e];
        arr[e] = arr[s] ^ arr[e];
        arr[s] = arr[s] ^ arr[e];

        s++;
        e--;
    }
}

int main(){

int arr[50];
int n;
cout<<"enter the size of the array:"<<endl;
cin>>n;
cout<<"enter the elements of the array:"<<endl;
for(int i=0; i<n; i++){
    cin>>arr[i];
}

// reverse(arr,n);
// reverse1(arr , n);

reverseXOR(arr, n);

for(int i= 0; i<n; i++){
    cout<<arr[i]<<" ";
}


return 0;

}