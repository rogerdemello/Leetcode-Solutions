class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        if (deck.size() < 2) return false; 

        unordered_map<int, int> count;
        for (int card : deck) count[card]++;

        int gcd_val = 0;
        for (auto& [key, freq] : count) gcd_val = gcd(gcd_val, freq); 

        return gcd_val >= 2;
    }
};
