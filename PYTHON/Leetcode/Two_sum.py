def twoSum(nums, target):
    for i in range(len(nums)):
        if((target-nums[i]) in nums[(i+1):]):
            x = [d for d, value in enumerate(nums) if value == (target-nums[i])]
            print(x)
            if(i==x[0]):
                print(i,x[1])
                break
            else:
                #print([i,nums[i+1:].index(target-nums[i])])
                print([i,x[0]])
                break

twoSum([3,2,4],6)
