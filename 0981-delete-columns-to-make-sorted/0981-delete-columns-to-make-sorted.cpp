class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
        int n = strs[0].length(); 

        for (int j = 0; j < n; j++) { 
            for (int i = 0; i < strs.size() - 1; i++) {  
                if (strs[i][j] > strs[i+1][j]) { 
                    count++;  
                    break;  
                }
            }
        }
        return count;
    }
};
