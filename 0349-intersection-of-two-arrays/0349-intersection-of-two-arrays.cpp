class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        set<int> s2;
        for(int i=0; i<max(nums1.size(), nums2.size()); i++)
        {
            if(i<nums1.size())  s1.insert(nums1[i]);
            if(i<nums2.size())  s2.insert(nums2[i]);
        }
        vector<int> ans;
        for(auto i:s1)
        {
            if(s2.find(i) != s2.end())  ans.push_back(i);
        }
        return ans;
    }
};