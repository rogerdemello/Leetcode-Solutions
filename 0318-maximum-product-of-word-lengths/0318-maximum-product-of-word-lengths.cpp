class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size();
        vector<int> masks(n);
        vector<int> lengths(n);

        for (int i = 0; i < n; i++) {
            int mask = 0;
            for (char c : words[i]) {
                mask |= (1 << (c - 'a'));
            }
            masks[i] = mask;
            lengths[i] = words[i].length();
        }

        int maxi = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((masks[i] & masks[j]) == 0) { 
                    maxi = max(maxi, lengths[i] * lengths[j]);
                }
            }
        }

        return maxi;
    }
};
