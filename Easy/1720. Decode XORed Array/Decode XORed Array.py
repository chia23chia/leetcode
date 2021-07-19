class Solution(object):
    def decode(self, encoded, first):
        """
        :type encoded: List[int]
        :type first: int
        :rtype: List[int]
        """
        ans = [0] * (len(encoded)+1)
        ans[0] = first
        for i in range(len(encoded)) :
            ans[i+1] = ans[i] ^ encoded[i]
        return ans
