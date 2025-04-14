class Solution {
    public:
     int longestSubsequence(vector<int>& arr, int difference) {
       int ans = 0;
       unordered_map<int, int> mp;
   
       for ( int a : arr) {
            if ( auto it = mp.find(a - difference); it != mp.cend())   mp[a] = it->second + 1;
            else   mp[a] = 1;
         ans = max(ans, mp[a]);
       }
       return ans;
     }
   };