import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    public static String rearrangeString(String s) {
        int n = s.length();
        char[] t = new char[n];
        int l = 0;
        int r = n - 1;
        boolean start = false;

        for (int i = n - 1; i >= 0; i--) {
            if (start) {
                t[l++] = s.charAt(i);
            } else {
                t[r--] = s.charAt(i);
            }

            if ("aeiou".indexOf(s.charAt(i)) != -1) {
                start = !start;
            }
        }

        return new String(t);
    }

    public static void main(String[] args) throws java.lang.Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine().trim());
        StringBuilder result = new StringBuilder();

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            String s = br.readLine().trim();

            result.append(rearrangeString(s)).append('\n');
        }

        System.out.print(result);
    }
}