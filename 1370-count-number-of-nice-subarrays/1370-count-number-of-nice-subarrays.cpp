class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size(); 
        vector<int> res(n + 1, 0);
        res[0] = 1; 

        int ans = 0; 
        int odds = 0; 
        for (int i : nums) {
            if(i%2==1)  odds++;

            if (odds >= k)  ans += res[odds - k];

            res[odds]++; 
        }
        return ans;
    }
};