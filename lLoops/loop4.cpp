#include <iostream>
using namespace std;

int main() {
               // Full pyramid pattern
    int n;
    //cout<<"Full pyramid pattern: "<<endl;
    // cout<<"Inverted full pyramid pattern: "<<endl;
    cout<<"Hollow full pyramid pattern: "<<endl;
    cin>>n;
//     for (int row = 0; row < n; row++) {

//     // spaces
//     for (int col = 0; col < n - row - 1; col++)
//         cout << " ";

//     // stars
//     for (int col = 0; col < 2*row + 1; col++)
//         cout << "*";

//     cout << endl;
// }
                 // OR
    // for (int row = 0; row < n; row++) {
    //     // spaces
    //     for (int col = 0; col < n - row; col++)
    //         cout << " ";
    //     // stars
    //     for (int col = 0; col < row + 1; col++) {
    //         cout<<"* ";
    //     }
    //     cout << endl;
    // }

                   // Inverted full pyramid pattern
    // for (int row = 0; row < n; row++) {
    //     // spaces
    //     for (int col = 0; col < row; col++)
    //         cout << " ";
    //     // stars
    //     for (int col = 0; col < 2*(n-row)-1; col++)
    //         cout << "*";
    //     cout << endl;
    // }

                   // OR
    //     for (int row = 0; row < n; row++) {
    //     // spaces
    //     for (int s = 0; s <  row; s++)
    //         cout << " ";
    //     // stars
    //     for (int col = 0; col < n-row ; col++) {
    //         cout<<"* ";
    //     }
    //     cout << endl;
    // }

                     // Hollow full pyramid pattern
    for (int row = 0; row < n; row++) {
        // spaces
        for (int col = 0; col < n - row - 1; col++)
            cout << " ";
        // stars
        for (int col = 0; col < 2*row + 1; col++) {
            if (col == 0 || col == 2*row || row == n-1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}