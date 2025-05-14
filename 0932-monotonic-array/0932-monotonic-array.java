class Solution {
    public boolean checkAsc(int[] nums){
        for(int i=0; i<nums.length-1; i++)
        {
            if(nums[i]>nums[i+1])   return false;
        }
        return true;
    }
    public boolean checkDsc(int[] nums){
        for(int i=0; i<nums.length-1; i++)
        {
            if(nums[i]<nums[i+1])   return false;
        }
        return true;
    }

    public boolean isMonotonic(int[] nums) {
        boolean status=false;
        for(int i=0; i<nums.length-1; i++)
        {
            if(nums[i]>nums[i+1])
            {
                status = false; 
                break;
            }   
            else if(nums[i]<nums[i+1])
            {
                status = true;
                break;
            }   
            else 
            {
                continue;
            }
        }
        if(status == true)  return checkAsc(nums);
        else if(status == false) return checkDsc(nums);
        return status;
    }
}