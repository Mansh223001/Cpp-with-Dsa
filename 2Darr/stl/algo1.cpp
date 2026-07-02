#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v(5);

    v[0] = 90;
    v[1] = 80;
    v[2] = 10;
    v[3] = 40;
    v[4] = 50;

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // sort(v.begin(), v.end()); // sort is an algorithm that sorts the elements in a range in ascending order. In this case, it sorts the elements of the vector v from the beginning (v.begin()) to the end (v.end()).

    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // reverse(v.begin(), v.end());
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    rotate(v.begin(), v.begin() + 2, v.end());

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // left rotate by 3 positions: 10 40 50 90 80

    rotate(v.begin(), v.end() - 3, v.end());

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }   
    cout<<endl;
    return 0;
}