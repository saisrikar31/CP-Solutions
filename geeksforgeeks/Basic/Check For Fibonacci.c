class Solution {
    public boolean isFibonacci(int n) {
        int a = 0, b = 1;

        while (a < n) {
            int c = a + b;
            a = b;
            b = c;
        }

        return a == n;
    }
}