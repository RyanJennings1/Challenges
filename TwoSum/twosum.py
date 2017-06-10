#!/usr/bin/python

from sys import argv

class Solution(object):
  def twoSum(self, nums, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype: List[int]
    """
    #Simple solution:
    #Compare each number with another to target
    returnInts = []
    numCopy = nums
    for i in range(len(nums)):
      for j in range(len(numCopy)):
        if nums[i] == numCopy[j]:
          continue
        else:
          if (nums[i] + numCopy[j]) == target:
            returnInts.append(i)
            returnInts.append(j)
            return "Values: " + str(returnInts)

  def twoSumV2(self, nums, target):
    if len(nums) <= 1:
      return False
    buff_dict = {}
    for i in range(len(nums)):
      if nums[i] in buff_dict:
        return [buff_dict[nums[i]], i]
      else:
        buff_dict[target - nums[i]] = i


sol = Solution()

if len(argv) < 6:
  print "Not enough arguments"
elif len(argv) == 6:
  numArray = [int(argv[1]),int(argv[2]),int(argv[3]),int(argv[4])]
  print sol.twoSum(numArray, int(argv[5]))
else:
  print "Wrong number of arguments"
