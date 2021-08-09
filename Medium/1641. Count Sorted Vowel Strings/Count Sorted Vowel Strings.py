class Solution:
    def countVowelStrings(self, n: int) -> int: #排組問題 5個箱子放n顆球
        return math.comb(n + 4, n)
