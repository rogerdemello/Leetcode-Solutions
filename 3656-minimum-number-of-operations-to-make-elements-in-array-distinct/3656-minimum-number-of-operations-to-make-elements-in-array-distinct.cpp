class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int count = 0;

        while (l <= r) {
            unordered_map<int, int> mp;
            bool foundDuplicate = false;

            for (int i = l; i <= r; i++) {
                mp[nums[i]]++;
                if (mp[nums[i]] > 1) {
                    foundDuplicate = true;
                    break;
                }
            }

            if (foundDuplicate) {
                l += 3; 
                count++;
            } else {
                break;
            }
        }

        return count;
    }
};
