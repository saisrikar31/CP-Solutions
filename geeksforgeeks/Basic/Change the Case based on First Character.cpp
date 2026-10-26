class Solution {
    String modify(String s) {
        char ch = s.charAt(0);

        if (Character.isLowerCase(ch)) {
            return s.toLowerCase();
        } else {
            return s.toUpperCase();
        }
    }
}