class Solution:
    def reverse(self,s):
        if len(s) == 0: return s
        return self.reverse(s[1:]) + s[0]
    def reversePrefix(self, s: str, k: int) -> str:
        return self.reverse(s[:k]) + s[k:]