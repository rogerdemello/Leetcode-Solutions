class Solution {
public:
    int reachNumber(int target) {
        target = abs(target);
        int step = 0;
        int sum = 0;
        while(true)
        {
            if(sum>=target && (sum-target)%2==0)   return step;

            step++;
            sum += step;
        }
        return 0;

    }
};