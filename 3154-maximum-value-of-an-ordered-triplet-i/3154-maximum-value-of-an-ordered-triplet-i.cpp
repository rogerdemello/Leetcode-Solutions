class Solution {
    public:
     long long maximumTripletValue(vector<int>& nums) {
       long ans = 0;
       int diff = 0;  
       int maxValue = 0;  
   
       for (int i : nums) {
         ans = max(ans, static_cast<long>(diff) * i); 
         diff = max(diff, maxValue - i);
         maxValue = max(maxValue, i);   
       }
   
       return ans;
     }
   };
   