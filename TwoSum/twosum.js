/**
 * @param {number[]} nums
 * @params {number} target
 * @params {number[]}
 */
var twoSum = function(nums, target) {
  resultInts = [];
  for(i = 0; i < nums.length; i++) {
    for(j = 0; j < nums.length; j++) {
      if(nums[i] == nums[j]) {
        continue;
      } else {
        if((nums[i] + nums[j]) == target) {
          resultInts.push(nums[i]);
          resultInts.push(nums[j]);
          break
        }
      }
    }
  }
  console.log("Values " + resultInts);
};

twoSum([1,2,3,4], 5);
