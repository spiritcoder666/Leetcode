class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        n = len(nums)
        closest=float("inf")
        for i in range(0,n):

            closest = min(closest,abs(nums[i]))

        return closest if closest in nums else -closest


        