//Code:

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>hashSet;
        for(int i=0;i<nums.size();i++){
          hashSet.insert(nums[i]);
        }
      int longestStreak = 0;
      
      for(int num:nums){
        if(!hashSet.count(num-1)){
          int currentNum = num;
          int currentStreak = 1;
          
          while(hashSet.count(currentNum +1)){
            currentNum += 1;
            currentStreak +=1;
          }
          
          longestStreak = max(longestStreak, currentStreak);
        }
      }
      return longestStreak;
    }
};
