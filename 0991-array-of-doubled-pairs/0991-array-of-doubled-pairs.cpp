#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int num : arr) freq[num]++;

        vector<int> keys;
        for (auto& [key, _] : freq) {
            keys.push_back(key);
        }

        sort(keys.begin(), keys.end(), [](int a, int b) {
            return abs(a) < abs(b);
        });

        for (int key : keys) {
            if (freq[key] > freq[2 * key])  return false;

            freq[2 * key] -= freq[key];
        }
        return true;
    }
};
