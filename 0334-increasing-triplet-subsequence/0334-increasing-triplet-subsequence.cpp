class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        for (int i:nums) {
            if (i > min2)   return true; 
            if (i <= min1)  min1 = i; 
            else    min2 = i; 
        }
        return false;
    }
};