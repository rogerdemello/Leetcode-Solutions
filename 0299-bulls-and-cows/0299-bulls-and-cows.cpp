class Solution {
    public:
        string getHint(string secret, string guess) {
            int bulls = 0;
            int cows = 0;
    
            vector<int> vec1(10, 0);
            vector<int> vec2(10, 0);
    
            for (int i = 0; i < secret.length(); ++i) {
                int x = secret[i] - '0';
                int y = guess[i] - '0';
                if (x == y) {
                    bulls++;
                } else {
                    vec1[x]++;
                    vec2[y]++;
                }
            }
            for (int i = 0; i < 10; ++i) {
                cows += min(vec1[i], vec2[i]);
    
            }
            return to_string(bulls) + "A" + to_string(cows) + "B";
        }
    };