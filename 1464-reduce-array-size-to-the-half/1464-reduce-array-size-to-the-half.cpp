class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(auto i:arr)  mp[i]++;

        vector<int> freqVec;
        for (auto i:mp) freqVec.push_back(i.second);

        sort(freqVec.begin(), freqVec.end(), greater<int>());

        int removed = 0, count = 0, size = arr.size()/2;
        for (int i:freqVec) {
            removed += i;
            count++;
            if (removed>=size) break;
        }

        return count;
    }
};
