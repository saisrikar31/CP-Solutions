class Solution {
    public static int countSetBits(int n) {
        int total = 0;

        for (int i = 0; (1L << i) <= n; i++) {
            long power = 1L << i;
            long cycle = power * 2;
            long full = (n + 1L) / cycle;
            long rem = (n + 1L) % cycle;

            total += full * power;
            total += Math.max(0L, rem - power);
        }

        return total;
    }
}