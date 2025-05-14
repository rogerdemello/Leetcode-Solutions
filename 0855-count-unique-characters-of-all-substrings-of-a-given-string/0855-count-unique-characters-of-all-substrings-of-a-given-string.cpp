class Solution {
public:
    int uniqueLetterString(string s) {
        vector<vector<int>> index(26, {-1});
        for (int i = 0; i < s.size(); ++i) {
            index[s[i] - 'A'].push_back(i);
        }
        int count = 0;
        for (auto& indices : index) {
            indices.push_back(s.size());
            for (int i = 1; i < indices.size() - 1; ++i) {
                count += (indices[i] - indices[i - 1]) * (indices[i + 1] - indices[i]);
            }
        }
        return count;
    }

};