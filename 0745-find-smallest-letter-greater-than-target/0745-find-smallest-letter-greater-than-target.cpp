class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        sort(letters.begin(), letters.end());
        for(auto i:letters) if(i>target)   return i;
        return letters[0];
    }
};