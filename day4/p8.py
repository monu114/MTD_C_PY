s = input().split(',')
nums = list(map(int, filter(None, s)))

index_5 = nums.index(5)
index_8 = nums.index(8)

num1 = int(''.join(map(str, nums[index_5:index_8 + 1])))
num2 = sum(nums[:index_5] + nums[index_8 + 1:])

print(num1 + num2)
