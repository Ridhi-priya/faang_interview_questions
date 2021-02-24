Code : 

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int a[nums.size()];
      for(int i=0;i<nums.size();i++){
        a[i] = nums[i];
      }
      int i=1,n=nums.size();
      int m=300;
      while(m--){
        if(binary_search(a, a + n, i)==0){
          m=i;
          break;
        }
        i+=1;
      }
      return (m);
    }
};
