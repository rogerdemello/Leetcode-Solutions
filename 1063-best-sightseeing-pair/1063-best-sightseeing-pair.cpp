class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxScore = 0;
        int maxIPlusValue = values[0];
        for (int j = 1; j < values.size(); ++j) {
            maxScore = max(maxScore, values[j] - j + maxIPlusValue);
            maxIPlusValue = max(maxIPlusValue, values[j] + j);

        }
        return maxScore;
    }
};