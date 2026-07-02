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

    int target = 40;
    auto it = binary_search(v.begin(), v.end(), target);
    if(it){
        cout << "Element found: " << target << endl;
    } else {
        cout << "Element not found: " << target << endl;
    }
    


return 0;
}