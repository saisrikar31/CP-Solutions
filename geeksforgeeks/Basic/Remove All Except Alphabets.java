class Solution {
    public String removeChars(String s) {
        StringBuilder ans = new StringBuilder();

        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);

            if (Character.isLetter(ch)) {
                ans.append(ch);
            }
        }

        return ans.toString();
    }
}