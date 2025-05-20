class Solution {
public:
    bool isValid(string s) {
        if(s.length() % 3 != 0) return false;
        
        string str;
        for (char c : s) {
            str.push_back(c);

            if (str.size() >= 3 && str.substr(str.size() - 3, 3) == "abc") {
                str.erase(str.end() - 3, str.end());
            }
        }
        return str.empty();
        
    }
};