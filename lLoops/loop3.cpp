#include <iostream>
using namespace std;

int main() {
          // half pyramid pattern
    int n=4;
    cout<< "Half pyramid pattern: "<<endl;
    // cout<<"Inverted hollow half pyramid pattern: "<<endl;
    cin>>n;      
    // for(int r=1; r<=n; r++){
    //     for(int j=1; j<=r; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
     for(int r=1; r<=n; r++){
        for(int j=1; j<=r; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }


          // Inverted half pyramid pattern
    // for(int r=n; r>=1; r--){
    //     for(int j=1; j<=r; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

         // OR
    // for(int r=1; r<n; r++){
    //     for(int j=1; j<=n-r; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // } 
    
           // Reverse Inverted half pyramid pattern
    // for(int r=n; r>=1; r--){
    //     for(int j=1; j<=n-r; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
           // Hollow half pyramid pattern

    //  for(int row=0; row<n; row++) {
    //      for(int col=0; col<n-row; col++) {
    //          if(row == 0 || row == n-1 || col == 0 || (row+col == n-1) ) {
    //              cout << "* ";
    //          }
    //          else {
    //              cout << "  ";
    //          }
    //      }
    //      //ye main bhul jata hu
    //      cout << endl;
    //  }

    return 0;
}