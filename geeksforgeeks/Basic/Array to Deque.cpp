class Solution {
    public Deque<Integer> dqInsertion(List<Integer> arr) {
        Deque<Integer> dq = new ArrayDeque<>();
        for (int num : arr) {
            dq.addLast(num);
        }
        return dq;
    }
}