class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        for(auto i:nums)
        {
            if(j<2 || nums[j-2]!=i) nums[j++] = i;
        }
        return j;
    }
};