#include <vector>

class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        int rowCount = matrix.size();
        int columnCount = matrix[0].size();

        int currentRow = 0;   
        int currentCol = columnCount - 1; 

        while (currentRow < rowCount && currentCol >= 0) {
            if (matrix[currentRow][currentCol] == target) {
                return true;
            }
            if (matrix[currentRow][currentCol] < target) {
                currentRow++;
            } else {
                currentCol--;
            }
        }
        return false;
    }
};
