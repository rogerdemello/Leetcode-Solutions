class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> mp;
        vector<int> vec;
        for(auto i:nums)
        {
            if(mp.find(i)==mp.end())    mp.insert({i, 1});
            else    vec.push_back(i);
        }
        return vec;
    }
};