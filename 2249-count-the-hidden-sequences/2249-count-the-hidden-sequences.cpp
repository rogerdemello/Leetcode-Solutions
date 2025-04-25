class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long curr = 0;
        long long mini = 0;
        long long maxi = 0;

        for(auto i:differences)
        {
            curr += i;
            mini = min(curr, mini);
            maxi = max(curr, maxi);
        }

        long long ans = upper - maxi + mini - lower + 1;

        return max(0LL, ans);
    }
};