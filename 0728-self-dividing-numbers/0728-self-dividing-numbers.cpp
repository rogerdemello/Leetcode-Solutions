class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        
        for(int i = left; i <= right; i++) {
            int num = i;
            bool status = true;
            
            int temp = num; 
            while(temp > 0) {
                int digit = temp % 10;
                if (digit == 0 || num % digit != 0) {
                    status = false;
                    break;
                }
                temp /= 10;
            }
            
            if (status) {
                ans.push_back(num);
            }
        }
        return ans;
    }
};
