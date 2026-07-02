#include<iostream>
using namespace std;

void rotatearray(int arr[], int size, int k){
    k = k%size;

    if(k==0){
        return;
    }

    int temp[100];
    int index =0;
    for(int i=size-k; i<size; i++){
        temp[index] = arr[i];
        index++;
    }

    for(int i=size-1; i>=0; i--){
        arr[i] = arr[i-k];
    }

    for(int i=0; i<k; i++){
        arr[i] = temp[i];
    }
}

int main(){
    int arr[]= {5,6,11,2,33,10};
    int size = 6;
    int shift = 2;

    cout<<"Before Value:"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    rotatearray(arr,size,shift);
    
    cout<<"After Value:"<<" ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}