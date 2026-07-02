      // Queue in STL
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> myqueue;

    myqueue.push(10);
    myqueue.push(20);
    myqueue.push(30);
    myqueue.push(40);

    myqueue.pop();

    cout<<myqueue.front()<<endl;
    cout<<myqueue.back()<<endl;

    return 0;
}