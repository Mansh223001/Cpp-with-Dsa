                                 // swap two numbers using function
#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    cout<<"enter two numbers: "<<endl;
    cin>>x>>y;

    swap(&x, &y);

    cout<<"after swapping: "<<x<<" "<<y<<endl;

    return 0;
}