#include<iostream>
using namespace std;

// void sortColor(int arr[], int n){
//     int l=0 , m=0, h=n-1;
//     while(m<=h){
//         if(arr[m]==0){
//             swap(arr[l],arr[m]);
//             l++, m++;
//         }
//         else if(arr[m]==1){
//             m++;
//         }
//         else{
//             swap(arr[m],arr[h]);
//             h--;
//         }
//     }
// }

void sortColor1(int arr[], int n){
    int zeros=0, ones=0, twos=0;
    for(int i=0;i<n;i++){

        if(arr[i]==0)
            zeros++;
        
        else if(arr[i]==1)
            ones++;
        
        else
            twos++;
        
    }    

        int i=0;
        while(zeros>0){
            arr[i++]=0;
            zeros--;
        }
        while(ones>0){
            arr[i++]=1;
            ones--;
        }
        while(twos>0){
            arr[i++]=2;
            twos--;
        }
    
    
}

void sortedColor2(int arr[], int n){
    int low = 0 , mid = 0, high = n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){
    int arr[]= {2,0,2,1,1,0};
    int size = 6;

    cout<<"Before Value:"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    // sortColor(arr,size);
    // sortColor1(arr,size);
    sortedColor2(arr,size);
    
    cout<<"After Value:"<<" ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}