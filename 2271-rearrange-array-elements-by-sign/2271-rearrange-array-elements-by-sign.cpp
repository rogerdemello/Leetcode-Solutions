class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> vec(nums.size());  
        int j = 0; 
        int k = 1; 
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0) {
                vec[j] = nums[i];
                j += 2;
            } else {
                vec[k] = nums[i];
                k += 2;
            }
        }
        return vec;
    }
};
