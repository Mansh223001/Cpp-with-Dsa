                                         // count 0' /1's

#include<iostream>
using namespace std;

void printzerosAndones(int arr[], int n){  // function to count 0's and 1's in the array
    int zerocount = 0;
    int onecount = 0;

    for(int i=0; i<n; i++){
        int currentelement = arr[i];
        if(currentelement == 0){
            zerocount++;
        }
        if(currentelement == 1){
            onecount++;
        }
    }
    cout<<"totalzeros:"<<zerocount<<endl;
    cout<<"totalones:"<<onecount<<endl;
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
 printzerosAndones(arr, n);


return 0;

}