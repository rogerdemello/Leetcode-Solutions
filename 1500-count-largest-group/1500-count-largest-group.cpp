class Solution {
    public:
    int countLargestGroup(int n) {
        vector<int> count(40);
        for (int i = 1; i <= n; ++i) {
            int sum = 0, num = i;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            count[sum]++;
        }
        
        return ranges::count(count, ranges::max(count));
    }
};