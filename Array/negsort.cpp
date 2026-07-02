#include <iostream>
#include <algorithm>
using namespace std;

void negLposR(int arr[], int n){
    int left = 0, right = n-1;
    sort(arr, arr + n);

    while(left <= right){

        if(arr[left] < 0){
            left++;
        }
        else if(arr[right] > 0){
            right--;
        }
        else{
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main(){

    int arr[] = {1, -2, 3, -4, -1, 4};
    int size = 6;

    cout<<"Before the printing:"<<" ";
    cout<<endl;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    negLposR(arr,size);

    cout<<"After the printing"<<" ";
    cout<<endl;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}