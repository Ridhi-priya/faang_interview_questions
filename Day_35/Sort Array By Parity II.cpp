//code:

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
      int n = nums.size();
       vector<int>ans(n);
       int t=0;
       for(int i=0 ; i<nums.size() ; i++){
         if(nums[i]%2==0){
           ans[t]=nums[i];
            t+=2;
           }         
       }
       t=1;
      for(int i=0 ; i<nums.size() ; i++){
         if(nums[i]%2 == 1){
           ans[t]=nums[i];
        t+=2;
         }
       }
      return ans;
    }
};
