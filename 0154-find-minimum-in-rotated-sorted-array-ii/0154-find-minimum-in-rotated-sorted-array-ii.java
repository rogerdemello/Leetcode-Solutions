class Solution {
    public int findMin(int[] nums) {
       int temp = Integer.MAX_VALUE;
       for(int i=0; i<nums.length; i++) 
       {
        if(temp>nums[i])
          temp = nums[i];
       }
       return temp;
    }
}