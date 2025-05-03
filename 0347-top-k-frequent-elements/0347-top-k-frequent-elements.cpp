class Solution {
public:
    static bool compare(pair<int, int>& p1, pair<int, int>& p2) {
        if (p1.second == p2.second)
            return p1.first > p2.first;
        return p1.second > p2.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for (int num : nums) {
            mp[num]++;
        }
        vector<pair<int, int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), compare);

        for (int i = 0; i < k; i++) {
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};