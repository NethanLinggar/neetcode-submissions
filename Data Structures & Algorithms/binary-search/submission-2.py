class Solution:
    def search(self, nums: List[int], target: int) -> int:
        low = 0
        high = len(nums) - 1
        middle = (low + high) // 2

        while (high >= low):
            if nums[middle] == target:
                return middle
            elif nums[middle] < target:
                low = middle + 1
            elif nums[middle] > target:
                high = middle - 1
            middle = (low + high) // 2

        return -1