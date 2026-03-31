class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        int guess;

        while (low <= high) {
            mid = (low + high) / 2;
            guess = nums[mid];

            if (guess < target) {
                low = mid + 1;
            } else if (guess > target) {
                high = mid - 1;
            } else {
                return mid;
            }
        }

        return -1;
    }
};
