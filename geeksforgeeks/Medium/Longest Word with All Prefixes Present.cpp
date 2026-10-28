import java.util.*;

class Solution {
    public String longestString(String[] words) {
        Arrays.sort(words);
        HashSet<String> set = new HashSet<>();
        String ans = "";

        for (String w : words) {
            if (w.length() == 1 || set.contains(w.substring(0, w.length() - 1))) {
                set.add(w);

                if (w.length() > ans.length()) {
                    ans = w;
                }
            }
        }

        return ans;
    }
}