class Solution {
 public:
  bool isAlienSorted(vector<string>& words, const string& order) {
    vector<char> freq(26); 

    for (int i = 0; i < 26; i++)    freq[order[i] - 'a'] = i + 'a';

    for (string& i : words)
      for (char& c : i)
        c = freq[c - 'a'];

    return is_sorted(words.begin(), words.end());
  }
};