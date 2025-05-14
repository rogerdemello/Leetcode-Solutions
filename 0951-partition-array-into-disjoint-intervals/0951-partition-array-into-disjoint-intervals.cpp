class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec(n + 1, INT_MAX);
        for (int i = n - 1; ~i; i--) {
            vec[i] = min(nums[i], vec[i + 1]);
        }
        int mx = 0;
        for (int i = 1;; ++i) {
            int v = nums[i - 1];
            mx = max(mx, v);
            if (mx <= vec[i]) {
                return i;
            }
        }
    }
};