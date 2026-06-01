class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        res = []
        if len(nums1) > len(nums2):
            map_ = dict(Counter(nums2))
            for element in nums1:
                if element in map_:
                    if map_[element] == 0: 
                        del map_[element]
                        continue
                    res.append(element)
                    map_[element] -= 1
        else:
            map_ = dict(Counter(nums1))
            for element in nums2:
                if element in map_:
                    if map_[element] == 0: 
                        del map_[element]
                        continue
                    res.append(element)
                    map_[element] -= 1
        return res