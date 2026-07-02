#include<iostream>
#include <climits>
#include <algorithm>
using namespace std;

int findminimumIn2DArray(int arr[][4], int rowSize, int colSize){
    int minValue= INT_MAX;

    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            minValue = min(arr[i][j], minValue);
        }
    }
    return minValue;
}

int findmaximmum2DArray1(int arr[][4], int rowSize, int colSize){
    int maxValue = INT_MIN;

    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            maxValue = max(arr[i][j], maxValue);
        }
    }
    return maxValue;
}

int main(){
    int arr[3][4] = {
        {10,11,12,13},
        {20,21,95,23},
        {30,31,32,33}
    };

    int rowsize = 3;
    int colsize = 4;
    // int target = 23;

    int ans = findminimumIn2DArray(arr, rowsize, colsize);
    int ans1 = findmaximmum2DArray1(arr, rowsize, colsize);

    cout<<" ans is: "<<ans<<endl;
    cout<<" ans1 is: "<<ans1<<endl;

    return 0;
}