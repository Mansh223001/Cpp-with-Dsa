#include<iostream>
using namespace std;

void printarray(int arr[], int size){ // this is a function to print the elements of the array
    arr[1] = 100; // this will change the value of the second element of the array to 100
    for(int index=0; index<size; index++){
        cout<<arr[index]<<" "; // this will print the elements of the array
    }
    cout<<endl; // this will print a new line after printing the elements of the array
}

void solve(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i] = arr[i] * 10; // this will double each element of the array
    }
    cout<<endl; // this will print a new line after printing the elements of the array
}


int main(){

    int arr[] = {10,20,30,40,50}; // this is an array of size 5 and it is initialized with the values 10,20,30,40,50
    int size = 5; // this is the size of the array

    solve(arr, size); // this will call the solve function and pass the array and its size
    printarray(arr, size); // this will print the elements of the array

    return 0;
}