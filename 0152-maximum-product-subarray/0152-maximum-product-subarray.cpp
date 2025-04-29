class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currMax = nums[0];
        int currMin = nums[0];
        int maxPro = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0)    swap(currMax, currMin);

            currMax = max(nums[i], currMax * nums[i]);
            currMin = min(nums[i], currMin * nums[i]);

            maxPro = max(maxPro, currMax);
            if(maxPro<currMax)  maxPro = currMax;  
        }

        return maxPro;
    }
};
