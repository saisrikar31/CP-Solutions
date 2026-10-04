import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int[] arr = new int[n];
        
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        scanner.close();
        
        int min_diff = Integer.MAX_VALUE;
        int result = Integer.MAX_VALUE;
        
        for (int i = 0; i < n; i++) {
            int diff = Math.abs(arr[i] - k);
            if (diff < min_diff || (diff == min_diff && arr[i] < result)) {
                min_diff = diff;
                result = arr[i];
            }
        }
        
        System.out.println(result);
    }
}