class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int> mp1;
        map<char, int> mp2;

        for (char i:s) mp1[i]++;
        for (char i:t) mp2[i]++;

        int count = 0;

        for (auto i : mp1) {
            char c = i.first;
            if (mp1[c] > mp2[c])
                count += mp1[c] - mp2[c];
        }

        return count;
    }
};
