class Solution {
public:
    vector<vector<int>> result;

    void backtrack(vector<int>& nums, int index, vector<int> current) {
        if (index == nums.size()) {
            result.push_back(current);  // add current subset to result
            return;
        }

        // exclude
        backtrack(nums, index + 1, current);

        // include
        current.push_back(nums[index]);  // add element
        backtrack(nums, index + 1, current);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(nums, 0, {});
        return result;
    }
};