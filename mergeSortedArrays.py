def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        
        p1, p2 = m-1, n-1
       
        for d in range(m+n-1, -1, -1):
            # if second list is empty, nothing more to merge
            if p2 < 0:
                return
            # only merge from nums1 if there are items left to merge
            # insert at d the larger of the two values from nums1 and nums2
            if p1 >= 0 and nums1[p1] > nums2[p2]:                
                nums1[d] = nums1[p1]
                p1 -= 1
            else:
                nums1[d] = nums2[p2]
                p2 -= 1
                      