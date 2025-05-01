class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int j = 0;
        int maxi = *max_element(nums.begin(), nums.end());
        sort(nums.begin(), nums.end());

        for(int i=0; i<=maxi; i++)
        {
            if(nums[i]!=j)    return i;

            j++;
        }
        return maxi+1;
    }
};