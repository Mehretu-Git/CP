class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        ans = ""
        while (all(len(strs[i])>0 for i in range(len(strs)))) and (all(strs[i][0] == strs[0][0] for i in range(1,len(strs)))):
            ans += strs[0][0]
            for i in range(len(strs)):
                strs[i] = strs[i][1:]
        return ans
        