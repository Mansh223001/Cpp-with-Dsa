#include<iostream>
using namespace std;

bool search2DArray(int arr[][4], int rowsize, int colsize, int target){
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }

    // agar line 13 tak pohoch gye 
    // iska matlab dono loop tranverse kar chuke ho
    // iska matlab entire array tranverse kar chuke ho
    // iska matlab entire array me target nahi mila
    // iska matlab target not found 
    // iska matlab return false
    return false;
}

int main(){
    int arr[3][4] = {
        {10,11,12,13},
        {20,21,22,23},
        {30,31,32,33}
    };

    int rowsize = 3;
    int colsize = 4;
    int target = 32;

    bool ans = search2DArray(arr, rowsize, colsize, target);

    cout<<" ans is: "<<ans<<endl;
}