import java.util.*;

class Codechef {
    public static void main(String[] args) throws Exception {

        Scanner sc = new Scanner(System.in);

        int s = sc.nextInt();
        int t = sc.nextInt();

        int[] a = new int[s];

        // Input
        for (int i = 0; i < s; i++) {
            a[i] = sc.nextInt();
        }

        // Search
        boolean found = false;

        for (int i = 0; i < s; i++) {
            if (t == a[i]) {
                found = true;
                break;
            }
        }

        if (found) {
            System.out.println("yes");
        } else {
            System.out.println("no");
        }

        sc.close();
    }
}