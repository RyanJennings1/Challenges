/*
 * Determine whether an integer is a palindrome.
 * Do this without extra space.
 *
 */

#include <iostream>
#include <cstdlib>

class Solution {
  public:
    bool isPalindrome(int x) {
      int reversedNum = 0;
      int y = abs(x);
      while(y > 0) {
        reversedNum = (reversedNum*10) + (y%10);
        y /= 10;
      }
      std::cout << "x = " << x << std::endl;
      std::cout << "reversedNum = " << reversedNum << std::endl;
      if( abs(x) == reversedNum ) {
        return true;
      } else {
        return false;
      }
    }
};

int main(int argc, char* argv[]) {
  Solution sol;
  int number = atoi(argv[1]);
  bool result;
  result = sol.isPalindrome(number);
  
  std::cout << "Solution: " << result << std::endl;

  return 0;
}
