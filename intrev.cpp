                                             // integer reverse
#include <iostream>
using namespace std;

int reverse(int n){
    int sum=0;
    while(n!=0){
        int digit = n%10;
        sum = sum*10 + digit;
        n = n/10;
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    cout<<reverse(n);
    return 0;
}