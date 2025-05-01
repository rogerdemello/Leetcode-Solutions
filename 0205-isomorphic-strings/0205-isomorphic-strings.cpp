class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int arr1[256] = {0};
        int arr2[256] = {0};
        int n = s.length();

        for(int i=0; i<n; i++)
        {
            char charS = s[i];
            char charT = t[i];
            if (arr1[charS] != arr2[charT]) {

                return false;
            }
            arr1[charS] = arr2[charT] = i + 1;
        }
        return true;
    }
};