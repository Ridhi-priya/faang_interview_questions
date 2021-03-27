// Code:

class Solution {
public:
    int reverse(int x) 
    {
        int flag = 0; 
        
        if(x < 0)
            flag = 1;
        
        int num = abs(x);
        long int newNum = 0; 
        
        while(num > 0)
        {
            int rem = num % 10;
            
            if(newNum*10 > INT_MAX)
                return 0;
            
            newNum = newNum*10 + rem; 
            num = num/10;
        }
        
        if(flag == 0)
            return newNum;
        
        else
            return newNum*(-1);
    }
};
