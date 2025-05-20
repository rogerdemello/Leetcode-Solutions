class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> heap(stones.begin(), stones.end());
        while(heap.size()>1)
        {
            int a = heap.top();
            heap.pop();
            int b = heap.top();
            heap.pop();

            if(a!=b)    heap.push(abs(a-b));
        }        
        return heap.empty()?0:heap.top();
    }
};