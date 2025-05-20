class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int cSum = 0;
        for (int i : arr) {
            cSum += i;
        }

        if (cSum % 3 != 0) return false;

        int tSum = cSum / 3;
        int i = 0, j = arr.size() - 1;

        int lSum = 0, rSum = 0;

        while (i < arr.size()) {
            lSum += arr[i];
            if (lSum == tSum)   break;
            ++i;
        }
        while (j >= 0) {
            rSum += arr[j];
            if (rSum == tSum)   break;
            --j;
        }
        return i < j - 1;
    }
};