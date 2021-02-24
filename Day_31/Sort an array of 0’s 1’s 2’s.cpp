Question Link: https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();    //size of vector nums
        int a=0, b=0, c=0;        //initialisation of couting of '0', '1', '2'
        for(int i=0;i<n;i++){            
            if(nums[i] == 0)       //checking if nums containing '0;
                a++;                 //incrementing value of a by 1
            else if(nums[i] == 1)     //checking if nums containing '0;
                b++;       //incrementing value of b by 1
            else
                c++;     //incrementing value of c by 1
        }
        for(int i=0;i<a;i++)
            nums[i] = 0;      //restoring value of 0, a times
        for(int i=a;i<a+b;i++)
            nums[i] = 1;  //restoring value of 1, b times
        for(int i=a+b;i<a+b+c;i++)
            nums[i] = 2;        //restoring value of 2, c times
    }
};
