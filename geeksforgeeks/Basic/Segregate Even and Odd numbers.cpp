class Solution {
    void segregateEvenOdd(int arr[]) {
        java.util.Arrays.sort(arr);

        int[] temp = new int[arr.length];
        int k = 0;

        for (int n : arr) {
            if (n % 2 == 0) {
                temp[k++] = n;
            }
        }

        for (int n : arr) {
            if (n % 2 != 0) {
                temp[k++] = n;
            }
        }

        System.arraycopy(temp, 0, arr, 0, arr.length);
    }
}