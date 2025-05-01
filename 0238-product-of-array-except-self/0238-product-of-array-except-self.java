class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int [] left = new int[n];
        int [] right = new int[n];
        
        int ans[] = new int[n];
        int temp = 1;
        
        for(int i=1; i<n; i++)
        {
            temp *= nums[i-1];
            left[0] = nums[0];
            left[i] = temp;
        }
        temp = 1;
        for(int i=n-2; i>=0; i--)
        {
            temp *= nums[i+1];
            right[i] = temp;
        }
        left[0] = 1;
        right[n-1] = 1;
        for(int i=0; i<n; i++)
        {
            ans[i] = left[i]*right[i];
        }

        return ans;
    }
}