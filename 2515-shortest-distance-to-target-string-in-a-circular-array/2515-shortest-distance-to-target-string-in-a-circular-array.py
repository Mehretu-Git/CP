class Solution:
    def closestTarget(self, words: List[str], target: str, startIndex: int) -> int:
        min_distance = inf
        n = len(words)
        for i in range(n):
            if words[i] == target:
                d = abs(startIndex - i)
                c = abs(d-n)
                min_distance = min(min_distance, min(d,c))
        if min_distance == inf: return -1
        else: return min_distance