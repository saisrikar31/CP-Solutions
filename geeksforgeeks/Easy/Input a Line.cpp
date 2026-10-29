class Solution {
    public static void getLine() {
        String s;
        s = System.console() == null ? "" : System.console().readLine();
        System.out.println(s);
    }
}