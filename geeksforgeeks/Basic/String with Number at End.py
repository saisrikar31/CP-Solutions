class Solution {
    int isSame(String s) {
        int i = s.length() - 1;
        int num = 0;
        int place = 1;

        while (i >= 0 && Character.isDigit(s.charAt(i))) {
            num += (s.charAt(i) - '0') * place;
            place *= 10;
            i--;
        }

        return i + 1 == num ? 1 : 0;
    }
}