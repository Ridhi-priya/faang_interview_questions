//Code:
//I.
class Solution {
public:
    int fib(int N) {
     float z = sqrt(5);
        long long int t = (pow(2,N)*z);
        long long int a = (pow(1+z,N));
        long long int b = (pow(1-z,N));
        return (a-b)/t;
    }
};


//II.
class Solution {
public:
    int fib(int n) {
      if(n==0)
        return 0;
      if(n==1)
        return 1;
        return fib(n-1)+fib(n-2);
    }
};
