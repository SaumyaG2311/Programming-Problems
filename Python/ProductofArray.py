
"""
Given an array nums of n integers where n > 1,  
return an array output such that output[i] is equal
to the product of all the elements of nums except nums[i].
"""

def productExceptSelf(nums)
        if len(nums) < 2:
            return []
        res = []
        temp = 1
        for i in range(len(nums)):
            res.append(temp)
            temp *= nums[i]  
        temp = 1
        for j in range(len(nums)-1, -1, -1):
            res[j] = res[j] * temp 
            temp *= nums[j]
        return res

nums = [1,2,3,4]

productExceptSelf(nums)