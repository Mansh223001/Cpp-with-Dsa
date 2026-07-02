// Given array [2,5,7,9,11], search 7.
#include <iostream>
using namespace std;    

int firstElement(int arr[], int n, int target) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s<=e)
    {
        if(arr[mid]==target){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid]<target){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
    
}

int main() {
    int arr[] = {2, 7, 8, 9, 11,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int ans = firstElement(arr, n, target);

    if(ans != -1) {
        cout << "Element found at index: " << ans << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}