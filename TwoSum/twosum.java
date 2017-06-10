public class twosum{
  public static void main(String[] args) {
    int[] numbers = {1,2,3,4};
    int[] output;
    int tar = 5;
    output = twoSum(numbers, tar);
    System.out.println(output);
  } // End of main

  public static int[] twoSum(int[] nums, int target) {
    int[] resultInts = {0,0};
    for(int i = 0; i < nums.length; i++) {
      for(int j = 0; i < nums.length; j++) {
        if(nums[i] == nums[j]) {
          continue;
        } else {
          if((nums[i] + nums[j]) == target) {
            resultInts[0] = nums[i];
            resultInts[1] = nums[j];
            return resultInts;
          }
        }
      }
    }
    return resultInts;
  } // End of TwoSum

}
