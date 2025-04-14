class Solution {
    public:
     bool closeStrings(string word1, string word2) {
       if (word1.length() != word2.length())
         return false;
   
       unordered_map<char, int> mp1;
       unordered_map<char, int> mp2;
       string s1;        
       string s2;     
       vector<int> freqs1; 
       vector<int> freqs2; 
   
       for (char i : word1) ++mp1[i];
   
       for (char i : word2) ++mp2[i];
   
       for (auto& [i, freq] : mp1) {
         s1 += i;
         freqs1.push_back(freq);
       }
   
       for (auto& [i, freq] : mp2) {
         s2 += i;
         freqs2.push_back(freq);
       }
   
       sort(s1.begin(), s1.end());
       sort(s2.begin(), s2.end());
   
       if (s1 != s2)    return false;
   
       sort(freqs1.begin(), freqs1.end());
       sort(freqs2.begin(), freqs2.end());
       
       return freqs1 == freqs2;
     }
   };