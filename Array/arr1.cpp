#include<iostream>
using namespace std;    

int main(){

  //  int arr[4];
    // fill(arr, arr+4, 23); // this will fill the array with the value 23 from the starting index to the ending index
    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<endl; // this will print 23 23 23 23
       
    int arr[10];
    for(int index=0; index<5; index++){
        cout<<"Enter the value for index "<<index<<endl;
        // cin>>arr[index];
         cin>>index[arr]; // this is also a way to take input for the array, it is equivalent to cin>>arr[index]
    }
    //
    for(int index=0; index<5; index++){
        // cout<<arr[index]<<" "; // this will print the values of the array that we have entered
            cout<<index[arr]<<" "; // this is also a way to print the values of the array, it is equivalent to cout<<arr[index]
    }
    
    return 0; 
}