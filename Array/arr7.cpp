                  // swap with xor operator
#include<iostream>
using namespace std;


// void swapTemp(int arr[], int i, int j){
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }

void swapPlusMinus(int arr[], int i, int j){
    arr[i] = arr[i] + arr[j];
    arr[j] = arr[i] - arr[j];
    arr[i] = arr[i] - arr[j];
}

void swapXOR(int arr[], int i, int j){
    if(i == j) return;
    arr[i] ^= arr[j];
    arr[j] ^= arr[i];
    arr[i] ^= arr[j];
}

int main(){
// int a = 5; // 0101
// int b = 7; // 0111

// a = a^b; // 0101 ^ 0111 = 0010 (2)
// b = a^b; // 0010 ^ 0111 = 0101 (5)

// a = a^b; // 0010 ^ 0101 = 0111 (7)
// cout<<"a: "<<a<<endl;
// cout<<"b: "<<b<<endl;

int arr[] = {18, 25, 31, 40, 55};
// swapTemp(arr, 1, 3);
swapPlusMinus(arr, 2, 4);
// swapXOR(arr, 1,4);
for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
}
return 0;

}