                                    // Extreme print
#include<iostream>
using namespace std;

void extremeprint(int arr[], int n){
    int i= 0; 
    int j = n-1;
    while(i<=j){
        if(i==j){
            cout<<arr[i]<<" ";
            break;
        }
        else{
            cout<<arr[i]<<" ";
            i++;
            cout<<arr[j]<<" ";
            j--;
        }
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

extremeprint(arr, n);

return 0;

}