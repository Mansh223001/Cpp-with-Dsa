#include<iostream>
using namespace std;

int main() {
    // int a = 5;
    // int b = 10;
    // relational operators
    // cout<<(a > b) << endl; // Output: 0 (false)
    // cout<<(a < b) << endl; // Output: 1 (true)
    // cout<<(a == b) << endl; // Output: 0 (false)
    // cout<<(a != b) << endl; // Output: 1 (true)
    // cout<<(a >= b) << endl; // Output: 0 (false)
    // cout<<(a <= b) << endl; // Output: 1 (true)

    //  assignment operators
    //     a += 5; // a = a + 5; a becomes 10
    //     cout << "After += operator, a: " << a << endl; // Output: 10
    
    //     a -= 3; // a = a - 3; a becomes 7
    //     cout << "After -= operator, a: " << a << endl; // Output: 7
    
    //     a *= 2; // a = a * 2; a becomes 14
    //     cout << "After *= operator, a: " << a << endl; // Output: 14
    
    //     a /= 2; // a = a / 2; a becomes 7
    //     cout << "After /= operator, a: " << a << endl; // Output: 7
    
    //     a %= 3; // a = a % 3; a becomes 1
    //     cout << "After %= operator, a: " << a << endl; // Output: 1 

    // logical operators
    //     bool x = true=1, y = false=0
       int a = 5, b = 10;
       cout << (a > 3 && b < 15) << endl; // Output: 1 (true)
       cout << (a < 3 || b < 15) << endl; // Output: 1 (true)
       cout << !(a > 3) << endl; // Output: 0 (false)   
       cout << !(b < 15) << endl; // Output: 0 (false)
       
    return 0;
}