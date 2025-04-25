class Solution {
    public:
     int countCompleteSubarrays(vector<int>& nums) {
       int kMax = 2000;
       int totalDiff = unordered_set<int>(nums.begin(), nums.end()).size();
       int res = 0;
       int diff = 0;
       vector<int> count(kMax + 1);
   
       int l = 0;
        for (const int num : nums) {
            if (++count[num] == 1)
            diff++;
            while (diff == totalDiff)
                if (--count[nums[l++]] == 0)
                    diff--;
            res += l;
        }
   
       return res;
    }
};
   