class Solution {
public:
    int countPrimes(int n) {
        if (n < 2) return 0;
        vector<bool> isPrime(n, true);
        int s = sqrt(n);
        for (int i = 2; i <= s; i ++){
            if (isPrime[i]){    
                for (int j = i * i; j < n; j += i){
                    isPrime[j] = false;
                }
            }
        }
        int cnt = 0;
        for (int i = 2; i < n; i ++)
            if (isPrime[i])
                cnt ++;
        return cnt;
    }
};