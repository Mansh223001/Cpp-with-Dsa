                          // Exponential Search
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int start, int end, int target) {
    while(start <= end) {
        int mid = (start + end) / 2;

        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return -1;
}


int exponentialSearch(vector<int>& arr,
                      int target)
{
    int n = arr.size();

    if(arr[0] == target)
        return 0;

    int i = 1;

    while(i < n && arr[i] <= target)
    {
        i *= 2;
    }

    return binarySearch(
        arr,
        i/2,
        min(i, n-1),
        target
    );
}

int main() {
    vector<int> arr = {10, 12, 14, 16, 50};
    int target = 16;

    int ans = exponentialSearch(arr, target);

    if(ans != -1) {
        cout << "Element found at index: " << ans << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}