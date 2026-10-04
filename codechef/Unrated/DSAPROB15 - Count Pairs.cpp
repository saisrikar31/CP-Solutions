
import java.util.*;

public class Main {
    public static long countPairsLessThanX(int[] arr, int x) {
        long count = 0;
        int left = 0, right = arr.length - 1;
        while (left < right) {
            if (arr[left] + arr[right] < x) {
                count += (right - left);
                left++;
            } else {
                right--;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int x = sc.nextInt();
        System.out.println(countPairsLessThanX(arr, x));
    }
}