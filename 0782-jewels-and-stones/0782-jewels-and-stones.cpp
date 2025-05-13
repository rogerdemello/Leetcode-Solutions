class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> mp;
        for(auto i:stones)
        {
            mp[i]++;
        }
        int count = 0;
        
            for(auto i:jewels)  count += mp[i];
        
        return count;
    }
};