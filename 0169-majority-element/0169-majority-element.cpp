class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto i:nums)
        {
            if(mp.find(i) == mp.end())  mp.insert(make_pair(i, 1));
            else    mp[i] = mp.at(i) + 1;
        }
        for(auto i:mp)
        {
            if(i.second > nums.size()/2)
                return i.first;
        }
        return 0;
    }
};