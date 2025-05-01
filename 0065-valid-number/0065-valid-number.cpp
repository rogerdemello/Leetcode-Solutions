class Solution {
public:
    bool isNumber(string str) {
        int len = str.size();
        int i = 0;

        if (str[i] == '+' || str[i] == '-') i++;

        if (i == len) return false;

        if (str[i] == '.' && (i + 1 == len || str[i + 1] == 'e' || str[i + 1] == 'E')) return false;

        int dotCnt = 0, expCnt = 0;

        for (int j = i; j < len; ++j) {
            if (str[j] == '.') {
                if (expCnt || dotCnt) return false;
                dotCnt++;
            } 
            else if (str[j] == 'e' || str[j] == 'E') {
                if (expCnt || j == i || j == len - 1) return false;
                expCnt++;
                if (str[j + 1] == '+' || str[j + 1] == '-') {
                    if (++j == len - 1) return false;
                }
            } 
            else if (str[j] < '0' || str[j] > '9')    return false;
        }
        return true;
    }
};
