class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l = 0, r = s.length() - 1;
        
        while (l < r) {
            while (l < r && !((s[l] >= 'A' && s[l] <= 'Z') || (s[l] >= 'a' && s[l] <= 'z'))) {
                l++;
            }
            while (l < r && !((s[r] >= 'A' && s[r] <= 'Z') || (s[r] >= 'a' && s[r] <= 'z'))) {
                r--;
            }
            
            if (l < r) {
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }
        
        return s;
    }
};
