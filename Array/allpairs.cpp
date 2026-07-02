#include<iostream>
using namespace std;

// void printAllpairs(int arr[], int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<arr[i]<<" "<<arr[j]<<endl;
//         }
//     }
// }

// void printAllpairs1(int arr[], int n){
//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             cout<<arr[i]<<" "<<arr[j]<<endl;
//         }
//     }
// }

// void printAllpairs2(int arr[], int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<arr[i]<<" "<<arr[j]<<endl;
//         }
//     }
// }

void printAllpairs3(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<=i+1; j++){
            cout<<arr[i]+arr[j]<<endl;
        }
    }
}

bool checktwosum(int arr[], int n, int target){
     for(int i=0; i<n-1; i++){
        for(int j=0; j<=i+1; j++){
            if(arr[i]+arr[j]==target){
                return true;
            }
        }
    }
    return false;
}

void printAllpairs4(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                cout<<arr[i]<<arr[j]<<arr[k]<<endl;
                count++;
            }
        }
    }
    cout<<"Total count:"<<count<<endl;
}



int main(){
    int arr[]= {9,4,6,2,11};
    int size = 5;

    int target = 24;


    // printAllpairs(arr,size);
    // printAllpairs1(arr,size);
    // printAllpairs2(arr,size);
    // printAllpairs3(arr,size);
    bool ans = checktwosum(arr,size,target);

    if(ans == true){
        cout<<"target found"<<endl;
    }
    else{
         cout<<"target not found"<<endl;
    }

    // printAllpairs4(arr,size);    
    return 0;
}