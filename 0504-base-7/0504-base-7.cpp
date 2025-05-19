class Solution {
public:
    string convertToBase7(int x) {
        if (x == 0) return "0";
        string str = "";
        bool negative = x < 0;
        x = abs(x);
        while (x > 0) {
            str = char('0' + (x % 7)) + str;
            x /= 7;
        }
        return negative ? "-" + str : str;
       
    }
};