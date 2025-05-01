class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int c = nums1.length;
        for(int i=0; i<n; i++)
        {
            nums1[i+m] = nums2[i];
        }       
        Arrays.sort(nums1);
        /* for(int i=0; i<m/2; i++)
        {
            int temp = nums1[i];
            nums1[i] = nums1[m-1-i];
            nums1[m-1-i] = temp;
        } */
    }
}