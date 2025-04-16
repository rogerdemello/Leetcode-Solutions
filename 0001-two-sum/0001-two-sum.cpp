class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i; j<nums.size(); j++)
            {
                if(i!=j && nums[i]+nums[j]==target)
                {
                    arr.push_back(i);
                    arr.push_back(j);
                    break;
                }
            }
        }
        return arr;
    }
};