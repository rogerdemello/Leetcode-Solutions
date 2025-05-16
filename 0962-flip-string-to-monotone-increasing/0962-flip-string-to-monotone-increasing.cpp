class Solution {
 public:
  int minFlipsMonoIncr(string s) {
    int count = 0;
    int count1 = 0;

    for (auto i : s)
      if (i != '1') count = min(count + 1, count1);
      else  ++count1;

    return count;
  }
};