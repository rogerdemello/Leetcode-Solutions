class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        int n = s.size();
        for(int i=0; i<n/2; i++)
        {
            temp = s.at(n-1-i);
            s.at(n-1-i) = s.at(i);
            s.at(i) = temp;
        }
    }
};