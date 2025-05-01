class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> hs;
        for(auto i:nums)
        {
            if(hs.find(i) == hs.end())
            {
                hs.insert({i, 1});
            }
            else
            {
				int temp = hs[i];
				temp += 1;
                hs[i] = temp;
				
            }
        }
		
        for(auto i:hs)
        {
            if(i.second > 1)    return true;
        }
        return false;
    }
};