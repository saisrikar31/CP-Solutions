class Solution {
    public static boolean isPalinArray(int[] arr) {
        for (int num : arr) {
            int n = num;
            int rev = 0;

            while (n > 0) {
                rev = rev * 10 + n % 10;
                n = n / 10;
            }

            if (num != rev) {
                return false;
            }
        }

        return true;
    }
}