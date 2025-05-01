class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            if(mp.find(nums[i]) == mp.end())
            {
                mp.insert({nums[i], 1});
            }
            else
            {
                mp[nums[i]]++;
            }
        }
        for(auto i:mp)
        {
            if(i.second == 1){   
                int c =  i.first;
                return c;
            }
        }
        return 0;
    }
};