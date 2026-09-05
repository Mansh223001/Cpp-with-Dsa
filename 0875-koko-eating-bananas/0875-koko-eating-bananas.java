class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        
    int left = 1;
    int high = max(piles);

    while (left < high) {

        int mid = left + (high - left) / 2;

        int hours = 0;

        for (int i = 0; i < piles.length; i++) {

            hours += piles[i] / mid;

            if (piles[i] % mid != 0) {
                hours++;
            }
        }

        if (hours <= h) {
            high = mid;
        } else {
            left = mid + 1;
        }
    }

     return left;
    }

    static int max(int[] piles) {
    int maximum = piles[0];

    for (int pile : piles) {
        if (pile > maximum) {
            maximum = pile;
        }
    }

    return maximum;
}
}