import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        while (T-- > 0) {
            long n = sc.nextLong();
            long m = sc.nextLong();
            Long[] p = new Long[(int) n];
            
            for (int i = 0; i < n; i++) {
                p[i] = sc.nextLong();
            }
            
            Arrays.sort(p, (a, b) -> Long.compare(b, a));
            
            long tot = 0;
            long d = 0;
            
            for (int i = 0; i < n; i++) {
                tot += p[i];
                if (tot >= m) {
                    d = i + 1;
                    break;
                }
            }
            
            if (d == 0) {
                System.out.println("-1");
            } else {
                System.out.println(d);
            }
        }
        
        sc.close();
    }
}