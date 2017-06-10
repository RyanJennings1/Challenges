public class twosum{
  public static void main(String[] args) {
    int[] numbers = {1,2,3,4};
    int[] output;
    int tar = 5;
    output = twoSum(numbers, tar);
    for(int i = 0; i < output.length; i++) {
      System.out.println(output[i]);
    }
  } // End of main

  public static int[] twoSum(int[] nums, int target) {
    int[] resultInts = {0,0};
    for(int i = 0; i < nums.length; i++) {
      for(int j = 0; i < nums.length; j++) {
        if(nums[i] == nums[j]) {
          continue;
        } else {
          if((nums[i] + nums[j]) == target) {
            resultInts[0] = i;
            resultInts[1] = j;
            return resultInts;
          }
        }
      }
    }
    return resultInts;
  } // End of TwoSum

}
