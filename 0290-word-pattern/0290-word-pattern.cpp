class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string str;
        stringstream ss(s);
        vector<string> vec;
        
        while (getline(ss, str, ' ')) {
            vec.push_back(str);
        }
        
        if (vec.size() != pattern.size()) {
            return false;
        }

        unordered_map<char, string> mp;
        int j = 0;
        for (auto i : pattern) {
            if (mp.find(i) == mp.end()) {
                mp[i] = vec[j];
            } else {
                if (mp[i] != vec[j]) return false;
            }
            j++;
        }
        unordered_map<string, char> reverse_map;
        j = 0;
        for (auto i : pattern) {
            if (reverse_map.find(vec[j]) == reverse_map.end()) {
                reverse_map[vec[j]] = i;
            } else {
                if (reverse_map[vec[j]] != i) return false;
            }
            j++;
        }

        return true;
    }
};