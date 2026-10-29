class Solution {
    public int setBits(int n) {
        int count = 0;

        while (n > 0) {
            count += n % 2;
            n = n / 2;
        }

        return count;
    }
}