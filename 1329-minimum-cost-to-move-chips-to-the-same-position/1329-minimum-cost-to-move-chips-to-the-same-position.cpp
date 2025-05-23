class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int a = 0, b = 0;
        for(auto i : position) {
            if(i % 2 == 0) a++;
            else b++;
        }
        return min(a, b);
    }
};
