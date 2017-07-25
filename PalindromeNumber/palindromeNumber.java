/*
 * Determine wheter an integer is a palindrome.
 * Do this without extra space.
 *
 */

import java.lang.*;

class palindromeNumber {
  public static void main(String[] args) {
    int inputInt = Integer.parseInt(args[0]);
    System.out.printf("Solution: %b\n", isPalindrome(inputInt));
  }

  public static boolean isPalindrome(int x) {
    int reversedNum = 0;
    int y = Math.abs(x);
    while(y > 0) {
      reversedNum = (reversedNum*10) + (y%10);
      y /= 10;
    }
    if( Math.abs(x) == reversedNum ) {
      return true;
    } else {
      return false;
    }
  }
}
