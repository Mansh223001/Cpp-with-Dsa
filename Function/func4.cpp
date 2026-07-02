#include <iostream>
using namespace std;

int max(int a, int b){
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a, b;
    cout<<"enter two numbers: "<<endl;
    cin>>a>>b;

    int ans = max(a, b);
    cout<<"max is: "<<ans<<endl;

    return 0;
}