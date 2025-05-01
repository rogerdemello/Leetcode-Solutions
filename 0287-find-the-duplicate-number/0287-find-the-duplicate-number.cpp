class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto i:nums)
        {
            if(mp.find(i) == mp.end())  mp.insert({i, 1});
            else    return i;
        }
        return 0;
    }
};