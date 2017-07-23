#include <iostream>
#include <cstdlib>
#include <vector>

void printVector(std::vector<int> vecToPrint);

class Solution {
  public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
      std::vector<int> resultInt;
      for(unsigned int i = 0; i < nums.size(); i++) {
        for(unsigned int j = 0; j < nums.size(); j++) {
          if(nums[i] == nums[j]) {
            continue;
          } else {
            if((nums[i]+nums[j]) == target) {
              resultInt.push_back(i);
              resultInt.push_back(j);
              return resultInt;
            }
          }
        }
      }
      return resultInt;
    }
    void callEnd();
};

void printVector(std::vector<int> vecToPrint) {
  for(unsigned int i = 0; i < vecToPrint.size(); i++) {
    std::cout << vecToPrint[i] << "\n";
  }
} 

int main(int argc, char* argv[]) {
  Solution sol1;
  std::vector<int> nums1(4,0);
  nums1[0] = atoi(argv[1]);
  nums1[1] = atoi(argv[2]);
  nums1[2] = atoi(argv[3]);
  nums1[3] = atoi(argv[4]);
  std::vector<int> answers;
  int target1 = atoi(argv[5]);
  answers = sol1.twoSum(nums1, target1);
  printVector(answers);
  sol1.callEnd();
  return 0;
}

void Solution::callEnd() {
  std::cout << "End of program" << "\n";
}

