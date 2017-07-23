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
      return true;
    }
};

int main(int argc, char* argv[]) {
  Solution sol;
  int number = 123;
  bool result;
  result = sol.isPalindrome(number);
  
  std::cout << "Solution: " << result << std::endl;

  return 0;
}
