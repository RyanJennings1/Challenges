package main

import(
  "fmt"
  "os"
  "strconv"
)

func main() {
  var arg1, arg2, arg3, arg4 int
  if i, err := strconv.Atoi(os.Args[1]); err == nil {
    arg1 = i
  }
  if i, err := strconv.Atoi(os.Args[2]); err == nil {
    arg2 = i
  }
  if i, err := strconv.Atoi(os.Args[3]); err == nil {
    arg3 = i
  }
  if i, err := strconv.Atoi(os.Args[4]); err == nil {
    arg4 = i
  }
  myArray := [4]int{arg1,arg2,arg3,arg4}
  var tar int
  if i, err := strconv.Atoi(os.Args[5]); err == nil {
    tar = i
  }
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
