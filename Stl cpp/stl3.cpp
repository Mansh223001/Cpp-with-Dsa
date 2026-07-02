                               // STL3.cpp : Defines the entry point for the console application.
#include<iostream>
#include<vector>
using namespace std;


int main(){
    // vector<int>first;
    // vector<int>second;

    // first.push_back(10);
    // first.push_back(20);
    // first.push_back(30);
    // first.push_back(40);

    // second.push_back(50);
    // second.push_back(60);
    // second.push_back(70);
    // second.push_back(80);

    // first.swap(second); // Swaps the contents of first and second vectors
    // first.swap(second);
    // cout<< first[0] << " " << first[1] << " " << first[2] << " " << first[3] << endl; // Output: 50 60 70 80
    // cout<< second[0] << " " << second[1] << " " << second[2] << " " << second[3] << endl; // Output: 10 20 30 40
    // first.clear(); // Clears all elements from the first vector
    // cout<<"size of first vector after clear: "<<first.size()<<endl; // Output: 0
    // cout<<"size of second vector after clear: "<<second.size()<<endl; // Output: 4

                     // for each loop
    // vector<int>marks = {10, 20, 30, 40};

    // for(int mark : marks){
    //     cout<<mark<<" "; // Output: 10 20 30 40
    // }

                      // iterator
    vector<int>marks = {10, 20, 30, 40};
    vector<int>::iterator it = marks.begin(); // Initialize the iterator to the beginning of the vector

    while(it != marks.end()){
        cout<<*it<<" "; // Output: 10 20 30 40
        it++;
    }

return 0;
}