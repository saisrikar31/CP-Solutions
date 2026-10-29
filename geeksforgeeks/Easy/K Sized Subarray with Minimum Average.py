class Solution {
    public int leastAvg(int[] arr, int k) {
        int sum = 0;

        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }

        int minSum = sum;
        int index = 0;

        for (int i = k; i < arr.length; i++) {
            sum = sum - arr[i - k] + arr[i];

            if (sum < minSum) {
                minSum = sum;
                index = i - k + 1;
            }
        }

        return index + 1;
    }
}