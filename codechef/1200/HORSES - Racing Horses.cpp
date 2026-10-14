import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            long[] s = new long[n];
            for (int i = 0; i < n; i++) {
                s[i] = scanner.nextLong();
            }
            Arrays.sort(s);
          
            long min = Long.MAX_VALUE;

            for (int i = 0; i < n - 1; i++) {
                long diff = s[i + 1] - s[i];

                if (diff < min) {
                    min = diff;
                }
            }
            System.out.println(min);
        }
    }
}
