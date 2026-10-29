class Solution {
    public void segregateElements(int[] arr) {
        int n = arr.length;
        int[] temp = new int[n];
        int k = 0;

        // Store positive and zero elements first
        for (int x : arr) {
            if (x >= 0) {
                temp[k++] = x;
            }
        }

        // Store negative elements next
        for (int x : arr) {
            if (x < 0) {
                temp[k++] = x;
            }
        }

        // Copy back to original array
        for (int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
    }
}