
class Solution {
    public int earliestLastOcc(int arr[]) {
        java.util.HashMap<Integer, Integer> map = new java.util.HashMap<>();

        // Store the last occurrence of each element
        for (int i = 0; i < arr.length; i++) {
            map.put(arr[i], i);
        }

        int minIndex = Integer.MAX_VALUE;
        int answer = -1;

        // Find the smallest last occurrence index
        for (int key : map.keySet()) {
            if (map.get(key) < minIndex) {
                minIndex = map.get(key);
                answer = key;
            }
        }

        return answer;
    }
}
