import java.math.BigInteger;

class Solution {
    public static BigInteger fib(int n) {
        if (n == 1) return BigInteger.ZERO;
        if (n == 2) return BigInteger.ONE;

        BigInteger a = BigInteger.ZERO;
        BigInteger b = BigInteger.ONE;

        for (int i = 3; i <= n; i++) {
            BigInteger c = a.add(b);
            a = b;
            b = c;
        }

        return b;
    }
}