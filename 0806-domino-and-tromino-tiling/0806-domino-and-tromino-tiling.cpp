class Solution {
public:
    int numTilings(int n) {
        int kMod = 1'000'000'007;
        vector<long> vec(1001);
        vec[1] = 1;
        vec[2] = 2;
        vec[3] = 5;

        for (int i = 4; i <= n; ++i)
            vec[i] = (2 * vec[i - 1] + vec[i - 3]) % kMod;

        return vec[n];
    }
};