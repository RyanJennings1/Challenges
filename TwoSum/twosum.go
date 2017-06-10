package main

import "fmt"

func main() {
  myArray := [4]int{1,2,3,4}
  tar := 5
  fmt.Println(twoSum(myArray, tar))
}

func twoSum(nums [4]int, target int) [2]int {
  var returnInts [2]int
  for i := 0; i < len(nums); i++ {
    for j := 0; j < len(nums); j++ {
      if nums[i] == nums[j] {
        continue
      } else {
        if (nums[i] + nums[j]) == target {
          returnInts[0] = i
          returnInts[1] = j
          return returnInts
        }
      }
    }
  }
  return returnInts
}
