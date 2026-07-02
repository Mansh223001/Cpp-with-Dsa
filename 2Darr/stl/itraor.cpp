#include<iostream>
#include<vector>
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

    vector<int>::iterator it = find(v.begin(), v.end(), 40);
    if(it != v.end()){
        cout << "Element found: " << *it << endl;
    } else {
        cout << "Element not found: 40" << endl;
    }


return 0;
}    