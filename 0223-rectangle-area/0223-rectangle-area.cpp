class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int Aa = (ax2-ax1)*(ay2-ay1);
        int Ab = (bx2-bx1)*(by2-by1);

        int x3 = min(ax2, bx2) - max(ax1, bx1);
        int y3 = min(ay2, by2) - max(ay1, by1);

        int A3 = max(x3, 0)*max(y3, 0);

        return Aa + Ab - A3;
    }
};