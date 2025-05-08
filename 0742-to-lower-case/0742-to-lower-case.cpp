class Solution {
public:
    string toLowerCase(string s) {
        string str;
        for(auto i:s)
        {
            if(i>='A' && i<='Z')    str+=char(int(i)+32);
            else    str += i;
        }        
        return str;
    }
};