#!/usr/bin/python

"""
Reverse digits of an integer.
Example1: x = 123, return 321
Example2: x = -123, return -321
"""

from sys import argv

class Solution(object):
  def reverse(self, x):
    """
    :type x: int
    :rtype: int
    """
    if x > 0:
      return str(x)[::-1]
    else:
      x = abs(x)
      return "-" + str(x)[::-1]

sol = Solution()

if len(argv) == 2:
  print sol.reverse(int(argv[1]))
else:
  print "Wrong number of arguments"
