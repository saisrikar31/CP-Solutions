
class Solution {
    int countZeroes(int[] arr) {
        int low = 0;
        int high = arr.length - 1;
        int ans = arr.length;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == 0) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return arr.length - ans;
    }
}
