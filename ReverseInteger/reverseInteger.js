/**
 * @param {number} x
 * @param {number}
 *
 * Reverse digits of an integer.
 * Example1: x = 123, return 321
 * Example2: x = -123, return -321
 *
 */
var reverse = function(x) {
  if( x > 0) {
    return x.toString().split("").reverse().join("");
  } else {
    return "-" + x.toString().split("").reverse().join("").slice(0,-1);
  }
};

console.log("Solution: ", reverse(process.argv[2]));
