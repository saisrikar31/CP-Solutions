class Solution {
    public ArrayList<Integer> prefSum(int[] arr) {
        ArrayList<Integer> ans = new ArrayList<>();
        int sum = 0;

        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
            ans.add(sum);
        }

        return ans;
    }
}