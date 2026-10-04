import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Define the array
        int[] array = {3, 5, 2, 9, 7, 1};
        boolean found = false;

        // Check if 7 is present in the array
        for (int i = 0; i < array.length; ++i) {
            if (array[i] == 7) {
                found = true;
                break;
            }
        }

        // Print the result
        if (found) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}
