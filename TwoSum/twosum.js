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
          resultInts.push(i);
          resultInts.push(j);
          //break
          return "Values [" + resultInts + "]";
        }
      }
    }
  }
};

console.log(twoSum([parseInt(process.argv[2]), parseInt(process.argv[3]), parseInt(process.argv[4]), parseInt(process.argv[5])], parseInt(process.argv[6])));
