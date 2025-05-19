class Solution {
public:
    string to_binaryx(int x) {
        if (x == 0) return "0";
        string str = "";
        while (x > 0) {
            str = ((x % 2 == 0) ? '0' : '1') + str;
            x /= 2;
        }
        return str;
    }

    int findComplement(int num) {
        string s = to_binaryx(num);  
        reverse(s.begin(), s.end());
        int newNum = 0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='1')   s[i]='0';
            else    s[i]='1';
            newNum += (s[i]-'0')*pow(2, i);
        }     
        return newNum;
    }
};