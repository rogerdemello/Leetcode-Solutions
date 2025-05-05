class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> vec;
        set<int> s;
        for(int i=0; i<nums.size(); i++)    s.insert(nums[i]);
        for(int j=1; j<=nums.size(); j++)   if(s.find(j)==s.end())  vec.push_back(j);
        return vec;
    }
};