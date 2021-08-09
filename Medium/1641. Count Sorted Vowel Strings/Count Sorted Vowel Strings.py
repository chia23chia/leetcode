class Solution:
    def countVowelStrings(self, n: int) -> int: #排組問題 5個箱子放n顆球 H 5 n -> C 5+n-1 n
        return math.comb(n + 4, n)
