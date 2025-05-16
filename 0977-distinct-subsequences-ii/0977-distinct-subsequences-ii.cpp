class Solution {
 public:
  int distinctSubseqII(string s) {
    int kMod = 1'000'000'007;
    vector<long> vec(26);

    for (char c:s)  vec[c-'a'] = accumulate(vec.begin(),vec.end(),1L) % kMod;

    return accumulate(vec.begin(), vec.end(), 0L) % kMod;
  }
};