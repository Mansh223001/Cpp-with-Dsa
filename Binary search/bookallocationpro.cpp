            // Book Allocation Problem
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& arr, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0; i < arr.size(); i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if(studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }

    return true;
}

int findPages(vector<int>& arr, int m) {

    int n = arr.size();

    if(m > n) {
        return -1;
    }

    int start = *max_element(arr.begin(), arr.end());
    int end = 0;

    for(int pages : arr) {
        end += pages;
    }

    int ans = -1;

    while(start <= end) {

        int mid = start + (end - start) / 2;

        if(isPossible(arr, m, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {12,34,67,90};
    int m = 2;

    int ans = findPages(arr, m);

    cout << "Minimum number of pages: " << ans << endl;

    return 0;
}