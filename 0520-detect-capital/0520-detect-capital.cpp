class Solution {

public:

    bool detectCapitalUse(string word) {

        int capitalCount = 0;
        for (char c : word) {
            if (isupper(c)) {
                ++capitalCount;
            }
        }
        bool allCapitals = capitalCount == word.size();
        bool noCapitals = capitalCount == 0;    
        bool firstCapitalOnly = capitalCount == 1 && isupper(word[0]);
        return allCapitals || noCapitals || firstCapitalOnly;
    }
};