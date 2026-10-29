class Solution {
    public ArrayList<Integer> findMean(int[] arr, int[][] queries) {
        ArrayList<Integer> ans = new ArrayList<>();

        for (int[] q : queries) {
            int sum = 0;

            for (int i = q[0]; i <= q[1]; i++) {
                sum += arr[i];
            }

            int mean = sum / (q[1] - q[0] + 1);
            ans.add(mean);
        }

        return ans;
    }
}