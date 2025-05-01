class Solution {
    public int removeDuplicates(int[] nums) {
        int n = nums.length;
        int temp = nums[0];
        int [] arr = new int[n];
        arr[0] = temp;
        int j = 1;
        for(int i=0; i<n; i++)
        {
            if(temp != nums[i])
            {
                temp = nums[i];
                nums[j] = temp;
                j++;
            }
        }

        return j;
        
    }
}