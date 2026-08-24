class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        // Sort both arrays
        Arrays.sort(nums1);
        Arrays.sort(nums2);

        List<Integer> intersection = new ArrayList<>();
        int i = 0, j = 0;

        // Use two pointers to find the intersection
        while (i < nums1.length && j < nums2.length) {
            if (nums1[i] == nums2[j]) {
                if (intersection.isEmpty() || intersection.get(intersection.size() - 1) != nums1[i]) {
                intersection.add(nums1[i]);
                }
                i++;
                j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }

        // Convert the list to an array
        int[] result = new int[intersection.size()];
        for (int k = 0; k < intersection.size(); k++) {
            result[k] = intersection.get(k);
        }

        return result;
    }
}