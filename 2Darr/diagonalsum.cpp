#include<iostream>
using namespace std;

void printDiagonalSum(int arr[][3], int rowSize, int colSize){
    int sum = 0;
    // for(int i=0; i<rowSize; i++){
    //     for(int j=0; j<colSize; j++){
    //     if(i==j){
    //         sum = sum + arr[i][j];
    //     }
        
        // }
    // }
    for(int i=0; i<rowSize; i++){
        sum = sum+arr[i][i];
    }
    cout<<sum<<endl;
}

int main(){
    int arr[3][3] = {
        {10,11,12},
        {20,21,22},
        {30,31,32}
    };

    int rowsize = 3;
    int colsize = 3;

    printDiagonalSum(arr,rowsize,colsize);
    
    return 0;
}