class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int length1 = num1.size(), length2 = num2.size();
        vector<int> result(length1 + length2, 0);

        for (int i = length1 - 1; i >= 0; --i) {
            int digit1 = num1[i] - '0'; 
            for (int j = length2 - 1; j >= 0; --j) {
                int digit2 = num2[j] - '0'; 
                result[i + j + 1] += digit1 * digit2;
            }
        }

        for (int i = result.size() - 1; i > 0; --i) {
            result[i - 1] += result[i] / 10; 
            result[i] %= 10; 
        }

        int startIndex = result[0] == 0 ? 1 : 0;
        string resultStr;

        for (int i = startIndex; i < result.size(); ++i) {
            resultStr += '0' + result[i];
        }
        return resultStr;
    }
};