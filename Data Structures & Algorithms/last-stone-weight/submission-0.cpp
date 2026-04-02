class Solution {
public:
    priority_queue<int> max_heap;

    int lastStoneWeight(vector<int>& stones) {
        for (int stone : stones) {
            max_heap.push(stone);
        }

        while (max_heap.size() > 1) {
            int stone1 = max_heap.top();
            max_heap.pop();
            int stone2 = max_heap.top();
            max_heap.pop();

            int difference = abs(stone1 - stone2);
            if (difference) max_heap.push(difference);
        }

        if (max_heap.empty()) {
            return 0;
        } else {
            return max_heap.top();
        }
    }
};
