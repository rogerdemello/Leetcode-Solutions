class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp2;
        
        for(auto i:magazine)
        {
            if(mp2.find(i)==mp2.end())   mp2.insert({i, 1});
            else    mp2[i]++;
        }

        for(auto i:ransomNote)
        {
            if(mp2.find(i)==mp2.end())    return false;
            else
            {
                if(mp2[i]>0) mp2[i]--;
                else    return false;
            }
        }
        return true;
    }
};