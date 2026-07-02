#include<iostream>
using namespace std;

// int solve(int a, int b){
//     int sum = a + b;
//     return sum;
// }

int calculatePower(int base, int exponent){
    int result = 1;
    for(int i=1; i<=exponent; i++){
        result = result * base;
    }
    return result;
}

int main(){
    // int a, b;
    // cout<<"enter two numbers: "<<endl;
    // cin>>a>>b;

    // int ans = solve(a, b);
    // cout<<"sum is: "<<ans<<endl;

    int base, exponent;
    cout<<"enter base and exponent: "<<endl;
    cin>>base>>exponent;

    int power = calculatePower(base, exponent);
    cout<<"power is: "<<power<<endl;

    return 0;
}