question Link: https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
int maxSubArray(vector<int>& nums){
  int n = nums.size();  //size of vector
  int best = nums[0], sum = 0; //initialising best and sum
    for (int k = 0; k < n; k++) {      //iterating every element
      sum = max(nums[k],sum+nums[k]);   comparing nums elements, after adding one element adding to it
      best = max(best,sum); 
    }
  return best; //returning best
    }
};
