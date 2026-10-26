class Solution {
    public int redOrGreen(String s) {
        int r = 0, g = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'R') {
                r++;
            } else {
                g++;
            }
        }

        return Math.min(r, g);
    }
}