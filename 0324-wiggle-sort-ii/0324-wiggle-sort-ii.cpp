class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        int n = nums.size();

        int midIndex = (n - 1) >> 1;
        int lastIndex = n - 1;

        for (int k = 0; k < n; ++k) {
            if (k % 2 == 0) nums[k] = sorted[midIndex--];
            else  nums[k] = sorted[lastIndex--];
        }
    }
};