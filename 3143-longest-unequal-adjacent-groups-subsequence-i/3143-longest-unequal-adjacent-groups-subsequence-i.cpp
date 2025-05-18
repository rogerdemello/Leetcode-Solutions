class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> vec;
        int j = groups[0];
        int i = 0;
        vec.push_back(words[i]);

        while(i<words.size())
        {
            if(groups[i]!=j)
            {
                vec.push_back(words[i]);
                j = groups[i];
            }
            else    i++;
        }

        return vec;
    }
};