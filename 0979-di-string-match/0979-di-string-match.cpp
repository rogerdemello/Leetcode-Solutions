class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        int low = 0;
        int high = n;
        vector<int> res(n+1);
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'I') res[i] = low++;
            else    res[i] = high--;
        }

        res[n] = low;

        return res;
    }
};