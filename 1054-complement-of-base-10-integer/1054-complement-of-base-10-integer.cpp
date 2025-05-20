class Solution {
public:
    string to_base2(int n) {
        string s = "";
        while (n > 0) {
            s += (n % 2 == 0) ? '1' : '0';
            n /= 2;
        }
        reverse(s.begin(), s.end());
        return s;
    }

    int bitwiseComplement(int n) {
        if (n == 0) return 1;

        string s = to_base2(n);

        int num = 0;
        for (char c : s) {
            num = num * 2 + (c - '0');
        }
        return num;
    }
};
