class Solution {
    static String conRevstr(String s1, String s2) {
        String s = s1 + s2;
        StringBuilder sb = new StringBuilder(s);
        return sb.reverse().toString();
    }
}