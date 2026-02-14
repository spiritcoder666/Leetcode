class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        
        n=len(prices)
        maxprofit = 0
        minprice = prices[0]
        for i in range(1,n):
            maxprofit = max(maxprofit,prices[i]-minprice)
            minprice = min(minprice,prices[i])
        return maxprofit