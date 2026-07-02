#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;

    for(int r=0; r<n ; r++){
        for(int c=0; c<r+1; c++){
            if(r==0||r==n-1||c==0||c==r){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }


    //  for(int r=0; r<n ; r++){
    //     for(int c=0; c<n-r; c++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    //  for(int r = 0; r < n; r++) {

    //     // Spaces
    //     for(int s = 0; s < r; s++) 
    //         cout << "  ";
        

    //     // Stars
    //     for(int c = 0; c < n - r; c++) 
    //         cout << "* ";
        

    //     cout << endl;
    // }

    return 0;
}