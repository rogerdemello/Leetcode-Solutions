class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if (k < 0) return 0;

        sort(nums.begin(), nums.end());
        int count = 0;
        int l = 0, r = 1;
        int n = nums.size();

        while (r < n) {
            if (l == r || nums[r] - nums[l] < k) {
                r++;
            } else if (nums[r] - nums[l] > k) {
                l++;
            } else {
                count++;
                int current_l = nums[l];
                int current_r = nums[r];
                while (l < n && nums[l] == current_l) l++;  
                while (r < n && nums[r] == current_r) r++; 
            }
            if (l == r) r++;
        }
        return count;
    }
};
