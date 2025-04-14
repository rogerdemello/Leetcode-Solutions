class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long result = 0;

        int maxLeft = nums[0];  
        vector<int> maxRight(n); 

        maxRight[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            maxRight[i] = max(maxRight[i + 1], nums[i]);
        }

        for (int j = 1; j < n - 1; ++j) {
            if (maxLeft > nums[j]) {
                long long val = (long long)(maxLeft - nums[j]) * maxRight[j + 1];
                result = max(result, val);
            }
            maxLeft = max(maxLeft, nums[j]);
        }

        return result;
    }
};
