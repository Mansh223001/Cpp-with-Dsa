#include<iostream>
using namespace std;

void print2kaTable(int n){  // n ka table print karne wala function
    for(int i=1; i<=10; i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
}

int main(){
    int n;
    cout<<"enter a number: "<<endl;
    cin>>n;

    print2kaTable(n);

    return 0;
}