class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vec;
        unordered_map<string, vector<string>> mp;

        for(auto i:strs)
        {
            string  j = i;
            sort(j.begin(), j.end());
            mp[j].emplace_back(i);
        }

        for(auto i:mp)  vec.emplace_back(i.second);
        return vec;
    }
};