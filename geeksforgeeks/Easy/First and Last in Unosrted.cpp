
import java.util.*;

class Solution {
    ArrayList<Integer> findIndex(int arr[], int key) {
        int first = -1;
        int last = -1;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == key) {
                if (first == -1) {
                    first = i;
                }
                last = i;
            }
        }

        ArrayList<Integer> result = new ArrayList<>();
        result.add(first);
        result.add(last);

        return result;
    }
}
