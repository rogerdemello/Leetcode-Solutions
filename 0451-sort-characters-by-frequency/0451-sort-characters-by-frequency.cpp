class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        
        for (char c : s)    mp[c]++;

        vector<pair<char, int>> freq(mp.begin(), mp.end());

        sort(freq.begin(), freq.end(), [&](pair<char, int>& a, pair<char, int>& b) {
            return a.second > b.second;
        });

        string res = "";

        for (auto& p : freq)    res.append(p.second, p.first);
        
        return res;
    }
};
