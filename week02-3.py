#week02-3.py
#LeetCode 1.Two Sum
#���@��Ʀrnum����Ӭۥ[�Otarget
#num[i]+num[j]==target�A���i&j
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box={}#���@�ӽc�l�A
        for i,num in enumerate(nums):
            other=target-num
            if other in box:
                return [box[other],i]
            else:
                box[num]=i
