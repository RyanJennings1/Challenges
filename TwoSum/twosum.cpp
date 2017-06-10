#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int> resultInt;
      for(unsigned int i = 0; i < nums.size(); i++) {
        for(unsigned int j = 0; j < nums.size(); j++) {
          if(nums[i] == nums[j]) {
            continue;
          } else {
            if((nums[i]+nums[j]) == target) {
              resultInt.push_back(nums[i]);
              resultInt.push_back(nums[j]);
              return resultInt;
            }
          }
        }
      }
      return resultInt;
    }
    void callEnd();
};

void printVector(vector<int> vecToPrint) {
  for(unsigned int i = 0; i <= vecToPrint.size(); i++) {
    cout << vecToPrint[i] << "\n";
  }
} 

int main() {
  Solution sol1;
  vector<int> nums1(4,0);
  nums1[0] = 1;
  nums1[1] = 2;
  nums1[2] = 3;
  nums1[3] = 4;
  vector<int> answers;
  int target1 = 5;
  answers = sol1.twoSum(nums1, target1);
  printVector(answers);
  sol1.callEnd();
  return 0;
}

void Solution::callEnd() {
  cout << "End of program" << "\n";
}

