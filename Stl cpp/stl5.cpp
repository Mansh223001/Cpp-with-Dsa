                       // stl5.cpp
                       // List of vectors
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> myList; // Declare a list of integers

    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // Display the elements in the list

    // cout << "Elements in the list: ";
    // for(auto it = myList.begin(); it != myList.end(); ++it){
    //     cout << *it << " ";
    // }
    // cout << endl;

    // cout << "Size of the list: " << myList.size() << endl; // Output: 3

    // if(myList.empty() == true){
    //     cout << "The list is empty." << endl;
    // } else {
    //     cout << "The list is not empty." << endl; // Output: The list is not empty.
    // }

                      // using iterator to display elements in the list
    list<int>::iterator it = myList.begin(); // Initialize the iterator to the beginning of the list
    while(it != myList.end()){
        cout << *it << " "; // Output: 10 20 30
        it++;
    }


    
   return 0;
}