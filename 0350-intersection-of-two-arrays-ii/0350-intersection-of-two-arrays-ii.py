class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        res = []
        if nums2 < nums1: nums1, nums2 = nums2, nums1
        counts = Counter(nums1)
        for num in nums2:
            if counts[num] > 0:
                res.append(num)
                counts[num] -= 1
        return res