class Solution {
public:
    int findNthDigit(int n) {
        long digitLength = 1;
        long count = 9;
        long start = 1;

        while (n > digitLength * count) {
            n -= digitLength * count;
            digitLength++;
            count *= 10;
            start *= 10;
        }

        start += (n - 1) / digitLength;

        string s = to_string(start);
        return s[(n - 1) % digitLength] - '0';
    }
};
