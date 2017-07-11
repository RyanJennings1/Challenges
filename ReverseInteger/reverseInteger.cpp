/*
 * Reverse digits of an integer.
 * Example1: x = 123, return 321
 * Example2: x = -123, return -321
 *
 * Note:
 * The input is assumed to be a 32-bit signed integer.
 * Your function should return 0 when the reversed
 * integer overflows.
 *
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>

using namespace std;

class Solution {
  public:
    int reverse(int x) {
      int returnInt = 0;
      int y = x;
      int i;

      int intLength = log10(abs(x)) + 1;
      int exponent = intLength - 1;

      for(i = 0; i < intLength; i++) {
        returnInt += ((y%(10))*(pow(10, exponent)));
        y = y/10;
        exponent--;
      }

      return returnInt;
    }

};

int main(int argc, char* argv[]) {
  Solution sol1;

  int solutionInt = sol1.reverse(atoi(argv[1]));

  cout << "Solution: " << solutionInt << endl;

  return 0;
}


