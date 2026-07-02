                  // Stack implementation using list in C++
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> mystack;

    mystack.push(10);
    mystack.push(20);
    mystack.push(30);
    mystack.push(40);

    mystack.pop();

    cout<<mystack.top()<<endl;
    cout<<mystack.size()<<endl;

    return 0;
}