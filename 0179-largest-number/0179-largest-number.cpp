class Solution {
 public:
  string largestNumber(vector<int>& nums) {
    string res;

    ranges::sort(nums, [](int x, int y) {
      return to_string(x) + to_string(y) > to_string(y) + to_string(x);
    });

    for(int i:nums)  res += to_string(i);

    return res[0]=='0' ? "0":res;
  }
};