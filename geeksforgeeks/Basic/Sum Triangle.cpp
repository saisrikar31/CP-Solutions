class Solution {
    public ArrayList<Integer> getTriangle(int[] arr) {
        ArrayList<Integer> ans = new ArrayList<>();
        ArrayList<Integer> row = new ArrayList<>();

        for (int x : arr) {
            row.add(x);
        }

        while (!row.isEmpty()) {
            ans.addAll(0, row);

            ArrayList<Integer> next = new ArrayList<>();
            for (int i = 0; i < row.size() - 1; i++) {
                next.add(row.get(i) + row.get(i + 1));
            }

            row = next;
        }

        return ans;
    }
}