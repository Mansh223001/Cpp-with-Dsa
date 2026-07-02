                                    // Array with linear search
#include <iostream>
using namespace std;


bool linearsearch(int arr[], int size, int target){ // this is a function to perform linear search on the array
    for(int i=0; i<size; i++){
        //int currentelement = arr[i]; // this will store the current element of the array in a variable
        if(arr[i] == target){ // this will check if the current element is equal to the target element
            return true; // this will return true if the target element is found in the array
        }
    }
    return false; // this will return false if the target element is not found in the array
}

int main(){
    int arr[] = {10,20,30,40,50}; // this is an array of size 5 and it is initialized with the values 10,20,30,40,50
    int size = 5; // this is the size of the array
    int target=30; // this is the target element that we want to search in the array
    bool found = linearsearch(arr, size, target); // this will call the linearsearch function and pass the array, its size and the target element
    // if(found){
    //     cout<<"Target element found in the array"<<endl;
    // }
    // else{
    //     cout<<"Target element not found in the array"<<endl;
    // }

    cout<<"found: "<<found<<endl; // this will print the value of found variable, it will print 1 if the target element is found and 0 if it is not found

    return 0;
}