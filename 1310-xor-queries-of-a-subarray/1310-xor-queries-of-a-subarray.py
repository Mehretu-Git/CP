class Solution:
    def xorQueries(self, arr: List[int], queries: List[List[int]]) -> List[int]:
        res = []
        n = len(arr)
        len_query = len(queries)
        s = [arr[0]]
        for i in range(1,n):
            x = s[-1]
            s.append(x^arr[i])
        
        for left_index,right_index in queries:
            if left_index==0: res.append(s[right_index])
            else: res.append(s[right_index] ^ s[left_index-1])
        return res