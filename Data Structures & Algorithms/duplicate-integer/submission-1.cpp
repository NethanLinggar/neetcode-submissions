class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for (int i = nums.size(); i > 0; i--) {
            for (int j = 0; j < i; j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }
};