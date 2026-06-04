class Solution:
    def reverse_string(self, s):
        #base case
        if len(s) == 0:
            return s
        #recursive case
        return self.reverse_string(s[1:]) + s[0]
    def reverse_first_k(self,s,k):
        return self.reverse_string(s[:k]) + s[k:]
    def reverseStr(self, s: str, k: int) -> str:
        result_string = ""
        left = 0
        right = 2*k
        while left<=len(s):
            result_string += self.reverse_first_k(s[left:right],k)
            left += 2*k
            right += 2*k
        return result_string
        