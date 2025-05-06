class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> vec;
        for(auto i:nums)    vec.push_back(nums[i]);
        return vec;
        
    }
};