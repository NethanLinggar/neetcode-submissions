class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        current = 0
        for i in range(len(nums) - 1, -1, -1):
            current += 1
            for j in range(len(nums) - current):
                if nums[i] == nums[j]:
                    return True

        return False