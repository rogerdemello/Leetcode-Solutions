class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int totalSlices = 0;
        int current = 0;

        for (int i = 2; i < nums.size(); ++i) {
            if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2]) {
                ++current;
                totalSlices += current;
            } else {
                current = 0;
            }
        }

        return totalSlices;
    }
};
