class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = len(nums)
        freq = 1
        ans = nums[0]
        nums.sort()

        for i in range(n):
            if nums[i] == nums[i-1]:
                freq += 1
            else:
                freq = 1
            ans = nums[i]

            if freq > n/2:
                return ans
        