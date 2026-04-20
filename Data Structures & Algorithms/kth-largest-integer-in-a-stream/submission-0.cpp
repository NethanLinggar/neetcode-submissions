class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> min_heap;
    int global_k;

    KthLargest(int k, vector<int>& nums) {
        global_k = k;
        for (int num : nums) {
            add(num);
        }
    }
    
    int add(int val) {
        min_heap.push(val);

        if (min_heap.size() > global_k) {
            min_heap.pop();
        }
        
        return min_heap.top();
    }
};
