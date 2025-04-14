class Solution{
public:
    int minOperations(vector<int> &nums, int k)
    {

        unordered_set<int> set;
        int mini = INT_MAX;
        for (int i : nums)
        {
            if (i < k)  return -1;

            mini = min(mini, i);
            set.insert(i);
        }
        return set.size() - (mini == k);
    }
};