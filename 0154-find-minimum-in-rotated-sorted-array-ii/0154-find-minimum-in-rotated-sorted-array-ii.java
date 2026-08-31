class Solution {
    public int findMin(int[] arr) {
         int left = 0;
        int right = arr.length - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] < arr[right]) {
                // Minimum is at mid or on the left side
                right = mid;
            } else if (arr[mid] > arr[right]) {
                // Minimum must be on the right side
                left = mid + 1;
            } else {
                // arr[mid] == arr[right]
                // Cannot determine the side
                right--;
            }
        }

        return arr[left];
    }
}