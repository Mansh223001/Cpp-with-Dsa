#include <iostream>
using namespace std;
                
int main() {
                 // Rectangle pattern
    int length;
    cout<<"Enter the length of rectangle: "<<endl;
    cin>>length;

    int width;
    cout<<"Enter the width of rectangle: "<<endl;
    cin>>width;

    // for(int i=1; i<=length; i++){
    //     for(int j=1; j<=width; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

                    // Hollow rectangle pattern
    // for(int r=0; r<=length; r++){ // r for row
    //     for(int c=0; c<=width; c++){ // c for column
    //         if(r==0 || r==length || c==0 || c==width){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

      // Diagonal pattern
for(int r = 1; r <= length; r++) {
    for(int c = 1; c <= width; c++) {
        if(r == 1 || r == length || c == 1 || c == width|| r == c) {
            cout << "* ";
        }
        else {
            cout << "  ";   // TWO spaces
        }
    }
    cout << endl;
}
    return 0;
}