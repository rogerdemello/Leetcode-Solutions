class Solution {
public:
    bool isPowerOfThree(int n) {
        int i = 0;
        while(pow(3, i) <= n)
        {
            if(pow(3, i) < n)    i++;
            else if(pow(3, i) == n)  return true;
        }   
        return false;     
    }
};