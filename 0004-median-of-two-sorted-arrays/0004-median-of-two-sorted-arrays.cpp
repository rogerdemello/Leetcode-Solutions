class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(auto i:nums2)   nums1.push_back(i);
        sort(nums1.begin(), nums1.end());

        return (nums1.size()%2==1)?nums1[nums1.size()/2]:(nums1[nums1.size()/2] + nums1[nums1.size()/2 - 1])/2.0;
    }
};