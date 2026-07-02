#include<iostream>
using namespace std;

void printColSum(int arr[][4], int rowSize, int colSize){

    for(int j=0; j<colSize; j++){
        int sum =0;
        for(int i=0; i<rowSize; i++){
            sum = sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}

int main(){
    int arr[3][4] = {
        {10,11,12,13},
        {20,21,22,23},
        {30,31,32,33}
    };

    int rowsize = 3;
    int colsize = 4;

    printColSum(arr,rowsize,colsize);
    
    return 0;
}