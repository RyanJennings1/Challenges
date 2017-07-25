#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Determine whether an integer is a palindrome.
Do this without extra space.
"""

from sys import argv

class Solution(object):
  def isPalindrome(self, x):
    """
    :type x: int
    :rtype: bool
    """
    if str(abs(x))[::-1] == str(x):
      return True
    else:
      return False

sol = Solution()

if len(argv) == 2:
  print "Solution: " + str(sol.isPalindrome(int(argv[1])))
else:
  print "Wrong number of arguments\n"
