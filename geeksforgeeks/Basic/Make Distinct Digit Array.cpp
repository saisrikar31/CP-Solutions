class Solution {
public:
    vector<int> distDigit(vector<int>& arr) {
        set<int> s;

        for (int n : arr) {
            while (n > 0) {
                s.insert(n % 10);
                n /= 10;
            }
        }

        return vector<int>(s.begin(), s.end());
    }
};