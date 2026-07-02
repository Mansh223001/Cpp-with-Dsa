// Array: [1,2,3,2,4,2]

// Find how many times 2 appears.
#include <iostream>
using namespace std;

// int countOccurrences(int arr[], int n, int target) {
//     int first = -1, last = -1;
//     int s = 0, e = n - 1;
//     int mid = s + (e - s) / 2;

//     // Find first occurrence
//     while (s <= e) {
//         if (arr[mid] == target) {
//             first = mid;
//             e = mid - 1;
//         } else if (arr[mid] < target) {
//             s = mid + 1;
//         } else {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }

//     // Reset search range for last occurrence
//     s = 0;
//     e = n - 1;
//     mid = s + (e - s) / 2;

//     // Find last occurrence
//     while (s <= e) {
//         if (arr[mid] == target) {
//             last = mid;
//             s = mid + 1;
//         } else if (arr[mid] < target) {
//             s = mid + 1;
//         } else {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }

//     if (first == -1)
//         return 0;
//     else
//         return last - first + 1;
// }

int countOccurrences(int arr[], int n, int target) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}
int main() {
    int arr[] = {1, 2, 3, 2, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int count = countOccurrences(arr, n, target);
    cout << "Number of occurrences of " << target << ": " << count << endl;

    return 0;
}