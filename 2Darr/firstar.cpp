#include<iostream>
using namespace std;

int main(){
    int arr[3][3]={{5,4,70},
    {1,2,50},{3,6,60}
    };

    int isize=3;
    int jsize=3;

//    for(int i=0;i<jsize;i++){
//     for(int j=0;j<isize;j++){
//         cout<<arr[j][i]<<" ";
//     }
//     cout<<endl;
// }

// for(int i=0;i<jsize;i++){
//     for(int j=0;j<isize;j++){
//         if(i==j){
//             cout<<arr[i][j]<<" ";
//         }
//     }
//     cout<<endl;
// }

for(int i=0;i<jsize;i++){
    for(int j=0;j<isize;j++){
        if(i+j==2){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
}

    return 0;
}