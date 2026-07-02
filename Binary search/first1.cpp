#include <iostream>
#include <algorithm>
using namespace std;

// int binarySearch(int arr[], int n, int target) {
//     int start = 0;
//     int end = n - 1;

//     while(start <= end) {
//         int mid = (start + end) / 2;

//         if(arr[mid] == target) {
//             return mid;
//         }
//         else if(arr[mid] < target) {
//             start = mid + 1;
//         }
//         else {
//             end = mid - 1;
//         }
//     }

//     return -1;
// }

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int target = 30;

    bool ans = binary_search(arr, arr + n, target);

    if(ans) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}