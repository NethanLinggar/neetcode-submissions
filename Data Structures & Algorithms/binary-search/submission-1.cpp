class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int middle = (low + high) / 2;

        while (high >= low) {
            if (nums[middle] == target) return middle;
            else if (nums[middle] > target) high = middle - 1;
            else if (nums[middle] < target) low = middle + 1;
            middle = (low + high) / 2;
        }

        return -1;
    }
};
