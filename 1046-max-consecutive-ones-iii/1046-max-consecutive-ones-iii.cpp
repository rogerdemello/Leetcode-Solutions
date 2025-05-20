class Solution {
 public:
  int longestOnes(vector<int>& nums, int k) {
    int x = 0;

    for (int left = 0, right = 0; right < nums.size(); right++) {
      if (nums[right] == 0)
        --k;
      while (k < 0)
        if (nums[left++] == 0)
          k++;
      x = max(x, right - left + 1);
    }

    return x;
  }
};