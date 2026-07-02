#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

int main(){
    // vector<int> v(5);

    // v[0] = 90;
    // v[1] = 80;
    // v[2] = 10;
    // v[3] = 40;
    // v[4] = 50;

    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // int sum = accumulate(v.begin(), v.end(), 0);
    // cout << "Sum: " << sum << endl;

    // int product = accumulate(v.begin(), v.end(), 1, multiplies<int>());
    // cout << "Product: " << product << endl;

    // int max_val = *max_element(v.begin(), v.end());
    // cout << "Maximum: " << max_val << endl;

    // int min_val = *min_element(v.begin(), v.end());
    // cout << "Minimum: " << min_val << endl;

    vector<int> first;

    first.push_back(1);
    first.push_back(2); 
    first.push_back(3);

    vector<int> second;

    second.push_back(4);
    second.push_back(5);    
    second.push_back(6);

    int ans = inner_product(first.begin(), first.end(), second.begin(), 1000);
    cout << "Inner Product: " << ans << endl;


    return 0;
}