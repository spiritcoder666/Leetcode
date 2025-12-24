class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        k=nums[0]
        for i in nums:
            if abs(i)<abs(k):
                k=i
        if k<0 and abs(k) in nums:
            return abs(k)
        else:
            return k
        