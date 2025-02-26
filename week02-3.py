#week02-3.py
#LeetCode 1.Two Sum
#有一堆數字num哪兩個相加是target
#num[i]+num[j]==target，找到i&j
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box={}#有一個箱子，
        for i,num in enumerate(nums):
            other=target-num
            if other in box:
                return [box[other],i]
            else:
                box[num]=i
