#include<iostream>
using namespace std;

int findFirstOccurrence(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] == target) {
            ans = mid; // Store the index of the found target
            end = mid - 1; // Continue searching in the left half
        }
        else if(arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return ans; // Return the index of the first occurrence or -1 if not found
}

int main(){
    int arr[] = {10, 20, 20, 30, 40, 50, 60, 70};
    int n = 8;
    int target = 20;

    // int ansIndex = -1;

    int ans = findFirstOccurrence(arr, n, target);

    cout<<ans<<endl;

    return 0;
}