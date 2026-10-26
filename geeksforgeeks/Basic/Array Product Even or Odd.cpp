class Solution {
    public boolean isProductEven(ArrayList<Integer> arr) {
        for (int num : arr) {
            if (num % 2 == 0) {
                return true;
            }
        }
        return false;
    }
}