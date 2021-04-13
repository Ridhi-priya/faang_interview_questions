//Code:

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int f=0;
        for(int i=0;i<arr.size()-2;i++){
            int z=i;
            if((arr[z+1] - arr[z]) != (arr[z+2]-arr[z+1])){
                f=1;
                break;
            }
                
        }
        if(f==1)
            return false;
        return true;
    }
};
