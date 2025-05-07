class Solution {
 public:
  bool judgeSquareSum(int c) {
    long long l = 0;
    long long r = sqrt(c);

    while (l <= r) {
      long long sum = pow(l, 2) + pow(r, 2);
      if (sum == c) return true;

      if (sum < c)  l++;
      else  r--;
    }
    return false;
  }
};