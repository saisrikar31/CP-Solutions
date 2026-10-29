class Solution {
    public int maxScore(int[] cardPoints, int k) {
        int sum = 0;

        for (int i = 0; i < k; i++) {
            sum += cardPoints[i];
        }

        int max = sum;
        int n = cardPoints.length;

        for (int i = 0; i < k; i++) {
            sum -= cardPoints[k - 1 - i];
            sum += cardPoints[n - 1 - i];
            max = Math.max(max, sum);
        }

        return max;
    }
}