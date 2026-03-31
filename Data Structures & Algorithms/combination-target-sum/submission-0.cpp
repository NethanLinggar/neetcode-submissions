class Solution {
public:
    vector<vector<int>> result;

    void backtrack(vector<int>& nums, int index, vector<int> current, int target) {
        int sum = 0;
        for (int num : current) {
            sum += num;
        }
        
        if (sum == target) {
            result.push_back(current);
            return;
        }
        if (sum > target) return;
        if (index >= nums.size()) return;

        // exclude
        backtrack(nums, index + 1, current, target);
        
        // include
        current.push_back(nums[index]);
        backtrack(nums, index, current, target);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        backtrack(nums, 0, {}, target);
        return result;
    }
};
