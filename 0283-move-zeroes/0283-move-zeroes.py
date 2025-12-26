class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        t=[]
        for i in range(0,len(nums)):
            if nums[i]!=0:
                t.append(nums[i])
        b = n-len(t)
        t=t+[0]*b
        nums[:]=t[:]         

        