class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        n  = len(nums)
        freq_dict = {}
        for i in range(0,n):
            freq_dict[nums[i]]=0
        j= 0
        for k in freq_dict:
            nums[j]=k
            j += 1
        return j
        