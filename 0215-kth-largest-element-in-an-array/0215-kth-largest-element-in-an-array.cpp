class Solution {
 public:
  int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<>> hp;

    for (const int num : nums) {
      hp.push(num);
      if (hp.size() > k)
        hp.pop();
    }

    return hp.top();
  }
};