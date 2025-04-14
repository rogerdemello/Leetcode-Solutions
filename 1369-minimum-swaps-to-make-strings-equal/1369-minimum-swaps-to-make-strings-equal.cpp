class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int count1 = 0, count2 = 0;
        for(int i=0; i<s1.length(); i++)
        {
            if(s1[i]=='x' && s2[i]=='y')    count1++;
            else if(s1[i]=='y' && s2[i]=='x')    count2++;
        }
        if((count1+count2)%2!=0) return -1;

        return count1/2 + count2/2 + count1%2 + count2%2;
    }
};