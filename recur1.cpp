                 // recursive function for factorial:
#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    int n;
    cout<<"enter a number: "<<endl;
    cin>>n;

    int ans = factorial(n);
    cout<<"factorial is: "<<ans<<endl;

    return 0;
}