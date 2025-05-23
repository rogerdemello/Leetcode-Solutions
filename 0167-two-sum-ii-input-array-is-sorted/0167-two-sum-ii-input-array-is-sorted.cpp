class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size()-1;
        while(true)
        {
            int sum = numbers[l] + numbers[r];
            if(sum == target)   return {l+1, r+1};

            if(sum > target)    r--;
            if(sum < target)    l++;
        }
        return {};
    }
};