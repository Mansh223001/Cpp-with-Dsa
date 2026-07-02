                                       // Fibonacci recursion
#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    cout<<"enter a number: "<<endl;
    cin>>n;

    int ans = fibonacci(n);
    cout<<"fibonacci is: "<<ans<<endl;

    return 0;
}