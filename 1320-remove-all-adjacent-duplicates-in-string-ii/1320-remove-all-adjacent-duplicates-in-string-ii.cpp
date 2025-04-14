class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> stk;

        for (char i : s) {
            if (!stk.empty() && stk.top().first == i) {
                stk.top().second++;
            } else {
                stk.push({i, 1});
            }

            if (stk.top().second == k) {
                stk.pop();
            }
        }

        string result = "";
        while (!stk.empty()) {
            result.append(stk.top().second, stk.top().first);
            stk.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
