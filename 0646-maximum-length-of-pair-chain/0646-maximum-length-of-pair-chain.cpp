class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        int maxLen = 0;
        int k = INT_MIN; 
        for (auto pair : pairs) {
            if (k < pair[0]) {
                k = pair[1]; 
                ++maxLen; 
            }
        }
        return maxLen;
    }
};
