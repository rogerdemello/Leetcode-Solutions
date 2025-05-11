class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count = 0;
        for (int r = 0, l = 0, pro = 1; r < nums.size(); ++r)
        {
            pro *= nums[r];
            while (l <= r && pro >= k)  pro /= nums[l++];
            count += r - l+ 1;
        }
        return count;
    }
};