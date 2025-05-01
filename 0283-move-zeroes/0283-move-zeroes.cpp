class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> vec;
        for(auto i:nums)    
        {
            if(i!=0)    vec.push_back(i);
        }
        for(int i=vec.size(); i<nums.size(); i++)   vec.push_back(0);
        nums = vec;
    }
};