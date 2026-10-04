import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    public static void main (String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        while (T-- > 0) {
            int n = sc.nextInt();
            int[] arr = new int[200];
            for (int j = 1; j <= n; j++) {
                arr[j] = sc.nextInt();
            }

            int it1 = 1, it2 = n, number = 0;
            boolean sol = true;

            while (number < 6) {
                ++number;
                if (arr[it1] != number || arr[it2] != number) {
                    sol = false;
                    break;
                }
                int r1 = 0, r2 = 0;
                while (it1 <= n && arr[it1] == number) {
                    ++r1;
                    ++it1;
                }
                while (it2 > 0 && arr[it2] == number) {
                    ++r2;
                    --it2;
                }
                if (r1 != r2) {
                    sol = false;
                    break;
                }
            }

            if (number == 6 && it1 <= it2) {
                ++number;
                for (int j = it1; j <= it2; j++) {
                    if (arr[j] != 7) {
                        sol = false;
                        break;
                    }
                }
            } else {
                sol = false;
            }
            
            if (sol) {
                System.out.println("yes");
            } else {
                System.out.println("no");
            }
        }
        sc.close();
    }
}