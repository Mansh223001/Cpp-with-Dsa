class Solution {
    public int findMin(int[] arr) {
          int low = 0;
        int high = arr.length - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // Check if the mid element is greater than the high element
            if (arr[mid] > arr[high]) {
                // The minimum is in the right half
                low = mid + 1;
            } else {
                // The minimum is in the left half (including mid)
                high = mid;
            }
        }

        // At the end of the loop, low == high, pointing to the minimum element
        return arr[low];
    }
}