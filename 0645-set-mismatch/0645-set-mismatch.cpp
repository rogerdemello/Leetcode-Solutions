class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec;
        unordered_map<int, int> count;
        int duplicate, missing;

        for (int num : nums) {
            count[num]++;
        }
        for (int i = 1; i <= n; i++) {
            if (count[i] == 2) {
                duplicate = i;
            } else if (count[i] == 0) {
                missing = i;
            }
        }
        vec.push_back(duplicate);
        vec.push_back(missing);
        return vec;
    }
};