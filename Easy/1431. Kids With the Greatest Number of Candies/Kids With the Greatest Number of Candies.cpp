class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        m = 0
        ans = [True] * len(candies)
        for i in candies :
            if i >= m :
                m = i 
    
        for j in range(len(candies)) :
            if candies[j] + extraCandies >= m :
                ans[j] = True
            else :
                ans[j] = False
        return ans
