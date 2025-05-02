class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long coverage = 1; 
        int patches = 0;
        size_t index = 0;

        while(coverage <= n)
        {
            if(index < nums.size() && nums[index]<=coverage)   coverage += nums[index++];

            else
            {
                coverage <<= 1;
                patches++;
            }
        }
        return patches;
    }
};