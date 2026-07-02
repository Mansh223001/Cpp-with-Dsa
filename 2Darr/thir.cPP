            // vector concept in 2D array
#include <iostream>
#include<vector>
using namespace std;

bool search20DArray(vector<vector<int> arr, int target){
    int rowSize = arr.size();
    int colSize = arr[0].size();

    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> arr(4, vector<int>(3,30));
    int rowSize = arr.size();
    int colSize = arr[0].size();

    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
