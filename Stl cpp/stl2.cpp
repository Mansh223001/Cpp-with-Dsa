                               // C++ STL 2.0
#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int>marks;

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    //cout<<"size of vector: "<<marks.size()<<endl; // Output: 4
    cout<<"capacity of vector: "<<marks.capacity()<<endl; // Output: 4 (initial capacity)


    if(marks.empty()){
        cout<<"vector is empty"<<endl;
    }
    else{
        cout<<"vector is not empty"<<endl; // Output: vector is not empty
    }

    // marks.pop_back(); // Remove the last element (40)

    // cout<<"size of vector after pop_back: "<<marks.size()<<endl; // Output: 3

    // cout<<marks.front()<<endl; // Output: 10 (first element)
    // cout<<marks.back()<<endl;  // Output: 30 (last element)

    return 0;
}