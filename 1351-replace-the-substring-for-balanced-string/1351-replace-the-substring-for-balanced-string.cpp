class Solution {
public:
    int balancedString(string s) {
        unordered_map<char, int> count;
        for (char c : s) count[c]++;
        
        int n = s.size();
        int res = n;
        int left = 0;

        for (int right = 0; right < n; ++right) {
            count[s[right]]--;

            while (left < n &&
                   count['Q'] <= n / 4 &&
                   count['W'] <= n / 4 &&
                   count['E'] <= n / 4 &&
                   count['R'] <= n / 4) {
                res = min(res, right - left + 1);
                count[s[left]]++;
                left++;
            }
        }
        return res;
    }
};
