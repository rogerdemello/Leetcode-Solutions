class Solution {
public:
    int countSubstrings(string s) {
        int count = 0, n = s.size();
        for (int c = 0; c < n * 2 - 1; ++c) {
            int l = c / 2, r = (c + 1) / 2;
            while (l >= 0 && r < n && s[l] == s[r]) {
                ++count;
                --l;
                ++r;
            }
        }
        return count;
    }
};
