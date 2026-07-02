#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printDouble(int x){
    cout<<2*x<<" ";
}

bool checkEven(int x){
    if(x%2==0){
        cout<<x<<" is even"<<endl;
        return true;
    }
    else{
        cout<<x<<" is odd"<<endl;
        return false;
    }
}

int main(){
    vector<int> v = {50,2,3,4,5};

    // int target = 3;
    // auto it = find(v.begin(), v.end(), target); 
    // for_each(v.begin(), v.end(), printDouble); // for_each is an algorithm that applies a function to each element in a range. In this case, it applies the printDouble function to each element in the vector v, printing the double of each element followed by a space.  
    auto it = find_if(v.begin(), v.end(), checkEven); // find_if -> find_if is an algorithm that searches for the first element in a range that satisfies a specified condition. In this case, it searches for the first element in the vector v that satisfies the checkEven predicate. If such an element is found, it returns an iterator pointing to that element; otherwise, it returns an iterator pointing to the end of the vector.
    cout<<*it<<endl; // Output: 3

    return 0;
}