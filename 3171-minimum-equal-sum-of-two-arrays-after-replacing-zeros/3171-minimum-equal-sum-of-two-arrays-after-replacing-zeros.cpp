class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = accumulate(nums1.begin(), nums1.end(), 0L);
        long long sum2 = accumulate(nums2.begin(), nums2.end(), 0L);

        int zeroes1 = count(nums1.begin(), nums1.end(), 0);
        int zeroes2 = count(nums2.begin(), nums2.end(), 0);

        if (zeroes1 == 0 && sum1<(sum2+zeroes2))  return -1;
        if (zeroes2 == 0 && sum2<(sum1+zeroes1))  return -1;

        return max(sum1 + zeroes1, sum2 + zeroes2);
    }
};