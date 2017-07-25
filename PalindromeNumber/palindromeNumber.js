/**
 * @param {number} x
 * @return {boolean}
 *
 * Determine whether an integer is a palindrome.
 * Do this without extra space.
 *
 */
var isPalindrome = function(x) {
  if( x.toString() === x.toString().split("").reverse().join("")) {
    return true;
  } else {
    return false;
  }
};

console.log("Solution: ", isPalindrome(process.argv[2]));
