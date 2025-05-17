class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for (char i:s) {
            mp[i]++;
        }

        int maxLen = 0;
        bool hasOdd = false;

        for (auto i : mp) {
            if (i.second%2 == 0) {
                maxLen += i.second;
            } else {
                maxLen += i.second - 1; 
                hasOdd = true;
            }
        }

        if(hasOdd)  maxLen += 1; 
        return maxLen;
    }
};
