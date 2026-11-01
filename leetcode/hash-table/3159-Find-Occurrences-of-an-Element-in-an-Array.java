
import java.util.*;

class Solution {
    public int[] occurrencesOfElement(int[] nums, int[] queries, int x) {

        ArrayList<Integer> list = new ArrayList<>();

        // Store indices where x occurs
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == x) {
                list.add(i);
            }
        }

        int[] ans = new int[queries.length];

        // Answer each query
        for (int i = 0; i < queries.length; i++) {
            int k = queries[i];

            if (k <= list.size()) {
                ans[i] = list.get(k - 1);
            } else {
                ans[i] = -1;
            }
        }

        return ans;
    }
}
