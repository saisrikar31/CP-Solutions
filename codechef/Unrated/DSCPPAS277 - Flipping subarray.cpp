import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] s = new int[n];
        for (int i = 0; i < n; i++) {
            s[i] = scanner.nextInt();
        }
        int prevOne = 0, currZero = 0, nextOne = 0;
        int ans = 0, zero = 0, i = 0;

        while (i < n) {
            while (i < n && s[i] == 0) {
                zero++;
                currZero++;
                i++;
            }
            while (i < n && s[i] == 1) {
                nextOne++;
                i++;
            }
            ans = Math.max(ans, prevOne + currZero + nextOne);
            prevOne = nextOne;
            currZero = 0;
            nextOne = 0;
        }

        if (ans == n && zero == 0) {
            System.out.println(ans - 1);
        } else {
            System.out.println(ans);
        }
    }
}