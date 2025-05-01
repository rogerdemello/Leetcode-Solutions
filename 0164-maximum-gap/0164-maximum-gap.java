class Solution {
    public int maximumGap(int[] nums) {
        Arrays.sort(nums);
        int max = 0;
        for(int i=nums.length-1; i>0; i--)
        {
            int cmax = nums[i] - nums[i-1];
            if(max < cmax)
            {
                max = cmax;
            }
        }
        return max;
    }
}