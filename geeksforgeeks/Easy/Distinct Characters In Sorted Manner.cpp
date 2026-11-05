class Solution {
    public String sortedDistinct(String s) {
        boolean[] seen = new boolean[65536];

        for (int i = 0; i < s.length(); i++) {
            seen[s.charAt(i)] = true;
        }

        StringBuilder result = new StringBuilder();

        for (int i = 0; i < 65536; i++) {
            if (seen[i]) {
                result.append((char) i);
            }
        }

        return result.toString();
    }
}