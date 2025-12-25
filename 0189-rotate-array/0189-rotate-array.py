class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        rotation = k%n
        for _ in range(0,rotation):
            e = nums.pop()
            nums.insert(0,e)
        