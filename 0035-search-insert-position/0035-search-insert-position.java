class Solution {
    public int searchInsert(int[] nums, int target) {
        int n = nums.length;
        int stat=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i] == target)
            {
                stat = i;
                break;
            }
            else if(nums[i]>target)
            {
                stat = i;
                break;
            }
            else
            {
                stat = n;
            }
        }
        return stat;
    }
}