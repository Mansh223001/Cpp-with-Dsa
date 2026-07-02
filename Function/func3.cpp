#include <iostream>
using namespace std;
int square(int n){
    return n*n;
}
int main() {
    // Write C++ code here
   int n;
   cin>>n;
   int ans = square(n);
   cout<<"ans:"<<ans<<endl;

    return 0;
}