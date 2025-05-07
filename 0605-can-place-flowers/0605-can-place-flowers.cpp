class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int x = flowerbed.size();
        for (int i = 0; i < x; ++i) {
            int l = (i == 0) ? 0 : flowerbed[i - 1];
            int r = (i == x - 1) ? 0 : flowerbed[i + 1];
            if (l + flowerbed[i] + r == 0) {
                flowerbed[i] = 1;
                --n;
            }
        }
        return n <= 0;
    }
};