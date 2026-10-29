class Solution {
    public int findMaxAverage(List<Integer> arr, int k) {
        int sum = 0;

        for (int i = 0; i < k; i++) {
            sum += arr.get(i);
        }

        int maxSum = sum;
        int index = 0;

        for (int i = k; i < arr.size(); i++) {
            sum = sum - arr.get(i - k) + arr.get(i);

            if (sum > maxSum) {
                maxSum = sum;
                index = i - k + 1;
            }
        }

        return index;
    }
}