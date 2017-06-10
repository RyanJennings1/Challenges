public class twosum{
  public static void main(String[] args) {
    int[] numbers = {
      Integer.parseInt(args[0]),
      Integer.parseInt(args[1]),
      Integer.parseInt(args[2]),
      Integer.parseInt(args[3]),
    };
    int[] output;
    int tar = Integer.parseInt(args[4]);
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
