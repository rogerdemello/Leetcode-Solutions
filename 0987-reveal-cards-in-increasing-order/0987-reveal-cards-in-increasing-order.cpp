class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        deque<int> dq;
        sort(deck.rbegin(), deck.rend());
        for(auto i:deck)
        {
            if(!dq.empty())
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
            dq.push_front(i);
        }
        return vector<int> (dq.begin(), dq.end());
    }
};