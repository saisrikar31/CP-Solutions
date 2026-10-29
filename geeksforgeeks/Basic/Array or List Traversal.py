class Solution {
    public void arrayTraversal(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            if (i > 0) System.out.print(" ");
            System.out.print(arr[i]);
        }
    }
}