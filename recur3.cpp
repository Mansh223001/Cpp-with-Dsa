#include <iostream>
using namespace std;

void printspell(int n, string str[]){
    if(n==0){  //  base case to stop the recursion when n becomes 0
        return;
    }
    printspell(n/10, str);
    int lastdigit = n%10;
    cout<<str[lastdigit]<<" "; // to print the last digit in words
}


int main(){
    int n;
    cout<<"Enter the input here: "<<endl;
    cin>>n;


    string str[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout<<"The spell of the number is: "<<endl;
    printspell(n, str);

    return 0;
}