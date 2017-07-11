/*
 * Reverse digits of an integer.
 * Example1: x = 123, return 321
 * Example2: x = -123, return -321
 */

import java.lang.*;

public class reverseInteger {
  public static void main(String[] args) {
    int inputInt = Integer.parseInt(args[0]);
    System.out.printf("Solution: %d\n", new reverseInteger().reverse(inputInt));
  }

  public int reverse(int x) {
    int returnInt = 0;
    int y = x;

    String stringOfInt = Integer.toString(Math.abs(x));
    int intLength = stringOfInt.length();
    int exponent = intLength - 1;

    for(int i = 0; i < intLength; i++) {
      returnInt += ((y%(10))*(Math.pow(10, exponent)));
      y = y/10;
      exponent--;
    }

    return returnInt;
  }

}
