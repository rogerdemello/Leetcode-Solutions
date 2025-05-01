class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> vec(256, -1);
        int start = -1;
        int maxlen = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(vec[s[i]] > start)   start = vec[s[i]];
            vec[s[i]] = i;
            maxlen = max(maxlen, i-start);
        }
        return maxlen;
    }
};