class Solution {
public:
    string DecimalToBinary(int num)
    {
        string str;
        while(num)
        {
            if(num & 1) str+='1';
            else    str+='0';
            num>>=1;
        }    
        reverse(str.begin(), str.end());
        return str;
    }

    int hammingWeight(int n) {
        string s = DecimalToBinary(n);
        int sum = 0;
        for(char i:s)   
            if(i=='1')    sum += 1;
        return sum; 
    }
};