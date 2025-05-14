class Solution {
    public int minSubArray(int[] nums) {
        int sum = 0;
        int minsum = Integer.MAX_VALUE;
        for(int i=0; i<nums.length; i++)
        {
            if(sum < 0)
            {
                sum += nums[i];
            }
            else
            {
                sum = nums[i];
            }
            if(sum < minsum)
            {
                minsum = sum;
            }
        }
        return minsum;
    }
    public int maxSubArray(int[] nums) {
        int sum = 0;
        int maxsum = Integer.MIN_VALUE;
        for(int i=0; i<nums.length; i++)
        {
            if(sum >= 0)
            {
                sum += nums[i];
            }
            else
            {
                sum = nums[i];
            }
            if(sum > maxsum)
            {
                maxsum = sum;
            }
        }
        return maxsum;
    }
    public int maxSubarraySumCircular(int[] nums) {
        int total = 0;
        int m = maxSubArray(nums);
        int n = minSubArray(nums);
        for(int i=0; i<nums.length; i++)
        {
            total += nums[i];
        }
        if(nums.length == 1)
        {
            return total;
        }
        else
        {
            return m<0?m:Math.max(m, total-n);
        } 
        
    }
}