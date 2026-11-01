
import java.util.*;

class Solution {
    static ArrayList<Integer> intersection(int arr1[], int arr2[]) {
        ArrayList<Integer> result = new ArrayList<>();

        int i = 0, j = 0;

        while (i < arr1.length && j < arr2.length) {

            if (arr1[i] < arr2[j]) {
                i++;
            }
            else if (arr1[i] > arr2[j]) {
                j++;
            }
            else {
                if (result.isEmpty() ||
                    result.get(result.size() - 1) != arr1[i]) {
                    result.add(arr1[i]);
                }

                i++;
                j++;
            }
        }

        return result;
    }
}

