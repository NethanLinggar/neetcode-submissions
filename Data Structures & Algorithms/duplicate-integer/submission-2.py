class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        hash_table = {}
        for num in nums:
            if num in hash_table:
                return True
            hash_table[num] = 1
        return False