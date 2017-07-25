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
  const char *resultString;
  result = sol.isPalindrome(number);
  if(result) {
    resultString = "True";
  } else {
    resultString = "False";
  }
  
  std::cout << "Solution: " << resultString << std::endl;

  return 0;
}
