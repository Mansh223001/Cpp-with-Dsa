                                 // C++ STL (Standard Template Library) Example
                                 // Container: vector
#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> v; // Create an empty vector of integers

    // // Adding elements to the vector
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);

    // cout << "Elements in the vector: ";
    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // // Removing the last element
    // v.pop_back();

    // cout << "After popping the last element: ";
    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // Inserting an element at a specific position

  //  vector<int> v(5); // Create a vector of integers with size 5 (default values are 0)
    // v[0] = 1;
    // v[1] = 2;
    // v[2] = 3;
    // v[3] = 4;
    // v[4] = 5;

    // cout << "Elements in the vector: ";
    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // vector<int> v(5, 10); // Create a vector of integers with size 5 and initialize all elements to 10

    // cout << "Elements in the vector: ";
    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;

                          // member of function
    vector<int> v(5, 4); // Create an empty vector of integers with size 5

    cout<<*v.begin()<<endl; // Output: 4 (first element)
    cout<<*v.end()<<endl;   // Output: 4 (one past the last element, but since we have 5 elements, it will point to the last element which is 4)
    

    return 0;
}