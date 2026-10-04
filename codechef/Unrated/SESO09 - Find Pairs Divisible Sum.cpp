import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        
        int[][] pairs = new int[n][2];
        
        for (int i = 0; i < n; i++) {
            pairs[i][0] = scanner.nextInt();
            pairs[i][1] = scanner.nextInt();
        }
        
        for (int i = 0; i < n; i++) {
            if ((pairs[i][0] + pairs[i][1]) % k == 0) {
                System.out.println("(" + pairs[i][0] + ", " + pairs[i][1] + ")");
            }
        }
        
        scanner.close();
    }
}