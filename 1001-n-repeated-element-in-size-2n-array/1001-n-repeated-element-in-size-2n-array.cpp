class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto i:nums)    mp[i]++;
        int n = nums.size();
        for(auto i:mp)  if(i.second == n/2) return i.first;
        return 0;
    }
};