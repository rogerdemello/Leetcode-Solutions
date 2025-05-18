class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> mp;  
        unordered_map<int, int> first;  
        unordered_map<int, int> last;  

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
            if (first.find(nums[i]) == first.end()) {
                first[nums[i]] = i;
            }
            last[nums[i]] = i;
        }

        int degree = 0;
        for (auto k : mp) {
            if (degree < k.second) {
                degree = k.second;
            }
        }

        int minLen = nums.size();
        for (auto k : mp) {
            if (k.second == degree) {
                minLen = min(minLen, last[k.first] - first[k.first] + 1);
            }
        }

        return minLen;
    }
};
