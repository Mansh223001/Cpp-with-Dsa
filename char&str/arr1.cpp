#include <iostream>
using namespace std;

int getLength(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main(){
    char arr[100];
    cout << "Enter your name: ";
    cin >> arr;

    cout << "Your name is: " << arr << endl;
    cout << "Length of your name is: " << getLength(arr) << endl;
}