class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int global_min = arrays[0][0];
        int global_max = arrays[0].back();
        int max_dist = 0;

        for (int i = 1; i < arrays.size(); i++) {
            int cur_min = arrays[i][0];
            int cur_max = arrays[i].back();
            
            max_dist = max(max_dist, abs(cur_max - global_min));
            max_dist = max(max_dist, abs(global_max - cur_min));

            global_min = min(global_min, cur_min);
            global_max = max(global_max, cur_max);
        }
        return max_dist;
    }
};
