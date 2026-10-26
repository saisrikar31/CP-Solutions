class Solution {
    String firstRepChar(String s) {
        boolean[] seen = new boolean[26];

        for (int i = 0; i < s.length(); i++) {
            int index = s.charAt(i) - 'a';

            if (seen[index]) {
                return String.valueOf(s.charAt(i));
            }

            seen[index] = true;
        }

        return "-1";
    }
}