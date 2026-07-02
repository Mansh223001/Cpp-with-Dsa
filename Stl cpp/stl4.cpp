                                    //  stl4.cpp
                                    // 2D vector
#include<iostream>
#include<vector>    
using namespace std;

int main(){
    // vector<vector<int>>matrix; // Declare a 2D vector (vector of vectors)

    // // Adding rows to the 2D vector
    // matrix.push_back({1, 2, 3});
    // matrix.push_back({4, 5, 6});
    // matrix.push_back({7, 8, 9});

    // // Accessing elements in the 2D vector
    // for(int i = 0; i < matrix.size(); i++){
    //     for(int j = 0; j < matrix[i].size(); j++){
    //         cout << matrix[i][j] << " "; // Output: 1 2 3 \n 4 5 6 \n 7 8 9
    //     }
    //     cout << endl;
    // }
                             // Using range-based for loop to access elements in the 2D vector
    // vector<vector<int>>matrix = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };

    // for(const auto& row : matrix){
    //     for(int element : row){
    //         cout << element << " "; // Output: 1 2 3 \n 4 5 6 \n 7 8 9
    //     }
    //     cout << endl;
    // }

                          // another way to declare and initialize a 2D vector
    // vector<vector<int>>matrix(3, vector<int>(3)); // Declare a 3x3 2D vector initialized with zeros

    // // Filling the 2D vector with values
    // int value = 1;
    // for(int i = 0; i < matrix.size(); i++){
    //     for(int j = 0; j < matrix[i].size(); j++){
    //         matrix[i][j] = value++; // Fill the 2D vector with values from 1 to 9
    //     }
    // }

    // vector<vector<int>>matrix(3, vector<int>(3,4)); // Declare a 3x3 2D vector initialized with the value 4

    // // Display the 2D vector
    // for(const auto& row : matrix){
    //     for(int element : row){
    //         cout << element << " "; // Output: 4 4 4 \n 4 4 4 \n 4 4 4
    //     }
    //     cout << endl;
    // }

    vector<vector<int>>brr(4); // Declare a 3x3 2D vector initialized with zeros

    brr[0] = vector<int>(4);
    brr[1] = vector<int>(3);
    brr[2] = vector<int>(2);
    brr[3] = vector<int>(1);

    //cout<<brr<<endl; // Output: 0 0 0 0 \n 0 0 0 \n 0 0 \n 0
    int totalRows = brr.size(); // Get the number of rows in the 2D vector
    cout << "Total rows in the 2D vector: " << totalRows << endl; // Output: Total rows in the 2D vector: 3




    return 0;
}