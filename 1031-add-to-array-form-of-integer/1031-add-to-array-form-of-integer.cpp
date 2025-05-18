class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int numIndex = num.size() - 1; 
        int carry = 0; 
        vector<int> result;

        while (numIndex >= 0 || k > 0 || carry > 0) {
          
            carry += (numIndex >= 0 ? num[numIndex] : 0) + (k % 10);
            result.push_back(carry % 10); 
            carry /= 10; 
            k /= 10; 
            numIndex--; 
        }
        reverse(result.begin(), result.end());
        return result;
    }
};