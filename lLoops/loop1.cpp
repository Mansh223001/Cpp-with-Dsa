#include <iostream>
using namespace std;

int main() {
    // for(int i=1; i<=3;i++){
    //     for(int j=1; j<=3; j++){
    //         cout<<i<<" "<<j<<endl;
    //     }
    // }

    // for(int i=1; i<=3;i++){
    //        cout<<"i: "<<i<<endl;
    //     for(int j=1; j<=3; j++){
    //         cout<<"j: "<<j<<endl;
    //     }
    // }
                // square pattern
    // int side;
    // cout<<"Enter the side of square: "<<endl;
    // cin>>side;

    // for(int i=1; i<=side; i++){
    //     for(int j=1; j<=side; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //   Hollow square pattern
    int side;
    cout<<"Enter the side of square: "<<endl;
    cin>>side;

    for(int r=1; r<=side; r++){ // r for row
        for(int c=1; c<=side; c++){ // c for column
            if(r==1 || r==side || c==1 || c==side){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}