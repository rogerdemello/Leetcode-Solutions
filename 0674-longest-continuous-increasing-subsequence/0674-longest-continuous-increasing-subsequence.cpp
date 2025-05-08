class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int curr = 1;
        int maxim = 1;

        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]<nums[i+1])   curr++;
            else    curr = 1;

            maxim = max(curr, maxim);
        }        
        return maxim;
    }
};