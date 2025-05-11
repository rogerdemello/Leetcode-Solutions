class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int days = prices.size();
        if (days == 0) return 0;
        
        vector<vector<int>> amount(days, vector<int>(2, 0));
        
        amount[0][1] = -prices[0];
        
        for (int i = 1; i < days; ++i) {
            amount[i][0] = max(amount[i-1][0], amount[i-1][1] + prices[i]- fee);
            amount[i][1] = max(amount[i-1][1], amount[i-1][0] - prices[i]);
        }

        return amount[days-1][0];
    }
};
