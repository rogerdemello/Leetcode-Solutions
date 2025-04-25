class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> mp;
        for(auto i:answers) mp[i]++;

        int total = 0;

        for (auto& i : mp) {
            int other = i.first;
            int notConfirmed = i.second;
            int groups = static_cast<int>(std::ceil((double)notConfirmed / (other + 1)));

            total += groups * (other + 1);

        }

        return total;
    }
};