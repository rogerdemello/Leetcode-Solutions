class Solution {
public:
    string minWindow(string s, string t) {
        if (t.empty() || s.empty()) return "";

        unordered_map<char, int> mpT, mpS;
        for (char c : t) mpT[c]++;

        int left = 0, right = 0, minLen = INT_MAX, startIdx = 0;
        int required = mpT.size(), formed = 0;

        while (right < s.length()) {
            char rChar = s[right++];
            mpS[rChar]++;

            if (mpT.count(rChar) && mpS[rChar] == mpT[rChar]) {
                formed++;
            }

            while (formed == required) {
                if (right - left < minLen) {
                    minLen = right - left;
                    startIdx = left;
                }

                char lChar = s[left++];
                mpS[lChar]--;
                if (mpT.count(lChar) && mpS[lChar] < mpT[lChar]) {
                    formed--;
                }
            }
        }

        return minLen == INT_MAX ? "" : s.substr(startIdx, minLen);
    }
};
