"""
Given an integer array nums, find the contiguous subarray (containing at least one number) 
which has the largest sum and return its sum.

"""

def maxSubArray(nums):
    maxsum = nums[0]
    summ = 0 
    for i in nums:
        if(i<=summ+i):
            summ+=i
        else:
            summ = i
        maxsum = max(maxsum,summ)
    return maxsum


nums = [-2,1,-3,4,-1,2,1,-5,4]
print(maxSubArray(nums))