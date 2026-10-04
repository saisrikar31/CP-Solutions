import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the input string
        String inputString = scanner.next();
        
        // Read the character to search for
        char searchChar = scanner.next().charAt(0);
        
        // Initialize a variable to store the position of the character
        int position = -1;
        
        // Use a for loop to search for the character in the string
        for (int i = 0; i < inputString.length(); ++i) {
            if (inputString.charAt(i) == searchChar) {
                position = i;
                break;
            }
        }
        
        // Print the result
        if (position != -1) {
            System.out.println(position);
        } else {
            System.out.println("-1");
        }
    }
}